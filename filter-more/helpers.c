#include "helpers.h"
#include "math.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int n = 0; n < height; n++)
    {
        for (int i = 0; i < width; i++)
        {
            int avg =
                round((image[n][i].rgbtBlue + image[n][i].rgbtGreen + image[n][i].rgbtRed) / 3.0);

            image[n][i].rgbtRed = avg;
            image[n][i].rgbtGreen = avg;
            image[n][i].rgbtBlue = avg;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int n = 0; n < height; n++)
    {
        for (int i = 0, w = width / 2; i < w; i++)
        {
            int swapRed = image[n][i].rgbtRed;
            int swapGreen = image[n][i].rgbtGreen;
            int swapBlue = image[n][i].rgbtBlue;

            image[n][i].rgbtRed = image[n][width - 1 - i].rgbtRed;
            image[n][i].rgbtGreen = image[n][width - 1 - i].rgbtGreen;
            image[n][i].rgbtBlue = image[n][width - 1 - i].rgbtBlue;

            image[n][width - 1 - i].rgbtRed = swapRed;
            image[n][width - 1 - i].rgbtGreen = swapGreen;
            image[n][width - 1 - i].rgbtBlue = swapBlue;
        }
    }

    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int red = 0, green = 0, blue = 0;
            int counter = 0;

            for (int di = -1; di <= 1; di++)
            {
                for (int dj = -1; dj <= 1; dj++)
                {
                    int ni = i + di;
                    int nj = j + dj;

                    if (ni >= 0 && ni < height && nj >= 0 && nj < width)
                    {
                        red += image[ni][nj].rgbtRed;
                        green += image[ni][nj].rgbtGreen;
                        blue += image[ni][nj].rgbtBlue;
                        counter++;
                    }
                }
            }
            temp[i][j].rgbtRed = red / counter;
            temp[i][j].rgbtGreen = green / counter;
            temp[i][j].rgbtBlue = blue / counter;
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = temp[i][j];
        }
    }
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

    const int gx[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
    const int gy[3][3] = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int redGx = 0, redGy = 0;
            int greenGx = 0, greenGy = 0;
            int blueGx = 0, blueGy = 0;
            for (int di = -1; di <= 1; di++)
            {
                for (int dj = -1; dj <= 1; dj++)
                {
                    int ni = i + di;
                    int nj = i + dj;

                    if (ni >= 0 && ni < height && nj >= 0 && nj < width)
                    {
                        redGx += gx[di + 1][dj + 1] * (image[ni][nj].rgbtRed);
                        redGy += gy[di + 1][dj + 1] * (image[ni][nj].rgbtRed);

                        greenGx += gx[di + 1][dj + 1] * (image[ni][nj].rgbtGreen);
                        greenGy += gy[di + 1][dj + 1] * (image[ni][nj].rgbtGreen);

                        blueGx += gx[di + 1][dj + 1] * (image[ni][nj].rgbtBlue);
                        blueGy += gy[di + 1][dj + 1] * (image[ni][nj].rgbtBlue);
                    }
                }
            }

            int red = sqrt(redGx * redGx + redGy * redGy);
            int green = sqrt(greenGx * greenGx + greenGy * greenGy);
            int blue = sqrt(blueGx * blueGx + blueGy * blueGy);

            temp[i][j].rgbtRed = (red > 255) ? 255 : red;
            temp[i][j].rgbtGreen = (green > 255) ? 255 : green;
            temp[i][j].rgbtGreen = (blue > 255) ? 255 : blue;
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = temp[i][j];
        }
    }
    return;
}

// void edges(int height, int width, RGBTRIPLE image[height][width])
// {
//     RGBTRIPLE temp[height][width];

//     const int gx[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
//     const int gy[3][3] = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};

//     for (int i = 0; i < height; i++)
//     {
//         for (int j = 0; j < width; j++)
//         {
//             int redGx = 0, redGy = 0;
//             int greenGx = 0, greenGy = 0;
//             int blueGx = 0, blueGy = 0;

//             for (int di = -1; di <= 1; di++)
//             {
//                 for (int dj = -1; dj <= 1; dj++)
//                 {
//                     int ni = i + di;
//                     int nj = j + dj;

//                     // Check boundaries
//                     if (ni >= 0 && ni < height && nj >= 0 && nj < width)
//                     {
//                         redGx += gx[di + 1][dj + 1] * image[ni][nj].rgbtRed;
//                         redGy += gy[di + 1][dj + 1] * image[ni][nj].rgbtRed;

//                         greenGx += gx[di + 1][dj + 1] * image[ni][nj].rgbtGreen;
//                         greenGy += gy[di + 1][dj + 1] * image[ni][nj].rgbtGreen;

//                         blueGx += gx[di + 1][dj + 1] * image[ni][nj].rgbtBlue;
//                         blueGy += gy[di + 1][dj + 1] * image[ni][nj].rgbtBlue;
//                     }
//                 }
//             }

//             // Calculate the magnitude of the gradient
//             int red = sqrt(redGx * redGx + redGy * redGy);
//             int green = sqrt(greenGx * greenGx + greenGy * greenGy);
//             int blue = sqrt(blueGx * blueGx + blueGy * blueGy);

//             // Clamp the values to the range [0, 255]
//             temp[i][j].rgbtRed = (red > 255) ? 255 : red;
//             temp[i][j].rgbtGreen = (green > 255) ? 255 : green;
//             temp[i][j].rgbtBlue = (blue > 255) ? 255 : blue;
//         }
//     }

//     // Copy the temp array back into the original image
//     for (int i = 0; i < height; i++)
//     {
//         for (int j = 0; j < width; j++)
//         {
//             image[i][j] = temp[i][j];
//         }
//     }

//     return;
// }
