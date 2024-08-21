#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int n = 0; n < height; n++)
    {
        for(int i = 0; i < height; i++)
        {
            int avg = round(image[n][i].rgbtBlue + image[n][i].rgbtGreen + image[n][i].rgbtRed);
            image[n][i].rgbtBlue = avg;
            image[n][i].rgbtGreen = avg;
            image[n][i].rgbtRed = avg;
        }

    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
