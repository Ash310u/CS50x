// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factorzxcvbnm@ass

    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);
    BYTE b;
    // TODO: Copy header from input file to output file
    while (fread(&HEADER_SIZE, sizeof(HEADER_SIZE), 1, input) <= 44)
    {
        fwrite(&HEADER_SIZE, sizeof(HEADER_SIZE), 1, output);
    }

    // TODO: Read samples from input file and write updated data to output file
    while (fread(&b, sizeof(b), 1, input) > 44 && fread(&b, sizeof(b), 1, input) != 0)
    {
        fwrite(&b, sizeof(b), 1, output);
    }

    // Close files
    fclose(input);
    fclose(output);
}
