#include "helpers.h"
#include <math.h>
#include <stdio.h>

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

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int n = 0; n < height; n++)
    {
        for (int i = 0; i < width; i++)
        {
            int sepiaRed = round(.393 * image[n][i].rgbtRed + .769 * image[n][i].rgbtGreen +
                                 .189 * image[n][i].rgbtBlue);
            int sepiaGreen = round(.349 * image[n][i].rgbtRed + .686 * image[n][i].rgbtGreen +
                                   .168 * image[n][i].rgbtBlue);
            int sepiaBlue = round(.272 * image[n][i].rgbtRed + .534 * image[n][i].rgbtGreen +
                                  .131 * image[n][i].rgbtBlue);

            if (sepiaRed <= 0)
            {
                sepiaRed = 0;
            }
            else if (sepiaRed >= 255)
            {
                sepiaRed = 255;
            }

            if (sepiaGreen <= 0)
            {
                sepiaGreen = 0;
            }
            else if (sepiaGreen >= 255)
            {
                sepiaGreen = 255;
            }

            if (sepiaBlue <= 0)
            {
                sepiaBlue = 0;
            }
            else if (sepiaBlue >= 255)
            {
                sepiaBlue = 255;
            }

            image[n][i].rgbtRed = sepiaRed;
            image[n][i].rgbtGreen = sepiaGreen;
            image[n][i].rgbtBlue = sepiaBlue;
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
    return;
}
