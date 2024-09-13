#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Accept a single command-line argument
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

    // Open the memory card
    FILE *card = fopen(argv[1], "r");
    if (card == NULL)
    {
        printf("Could not open %s.\n", argv[1]);
        return 2;
    }

    bool found_JPEG = false;
    int file_count = 0;
    char filename[8];

    // Create a buffer for a block of data
    uint8_t buffer[512];
    FILE *outptr = NULL;

    // While there's still data left to read from the memory card
    while (fread(buffer, 512, 1, card) == 1)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {
            if (found_JPEG)
            {
                fclose(outptr);
            }
            else
            {
                found_JPEG = true;
            }
            // Create JPEGs from the data
            sprintf(filename, "%03i.jpg", file_count);
            outptr = fopen(filename, "w");
            if (outptr == NULL)
            {
                fclose(card);
                printf("Could not open %s.\n", filename);
                return 3;
            }
            file_count++;
        }
        if (found_JPEG)
        {
            fwrite(buffer, 512, 1, outptr);
        }
    }
    fclose(card);
    if(found_JPEG)
    {
        fclose(outptr);
    }
    return 0;
}
