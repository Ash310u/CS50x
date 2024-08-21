#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int n = 0; n < height; n++)
    {
        for(int i = 0; i < height; i++)
        {
            int avg = image[n][i].rgbBlue + image[n][i].rgbGreen + image[n][i].rgbRed
            image[n][i].rgbBlue = 0
            image[n][i].rgbGreen = 0
            image[n][i].rgbRed = 0
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
