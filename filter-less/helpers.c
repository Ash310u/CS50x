#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int n = 0; n < height; n++)
    {
        for(int i = 0; i < height; i++)
        {
            int avg = round(image[n][i].rgbBlue + image[n][i].rgbGreen + image[n][i].rgbRed)
            image[n][i].rgbBlue = avg
            image[n][i].rgbGreen = avg
            image[n][i].rgbRed = avg
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
