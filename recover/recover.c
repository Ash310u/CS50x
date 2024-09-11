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

    // Create a buffer for a block of data
    uint8_t buffer[512];

    // While there's still data left to read from the memory card
    while (fread(&buffer, sizeof(buffer), 512, card) != 512)
    {

        if (buffer[0] == 0xff)
        {
            printf("value: %u\n", buffer[1]);
        }

        // fwrite(&b, sizeof(b), 1, dst)
    }

    // Create JPEGs from the data
}
