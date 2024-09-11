#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;
int main(int argc, char *argv[])
{
    // Accept a single command-line argument

    // Open the memory card
    FILE *src = fopen("card.raw","r");
    if (src == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }

    BYTE buffer[512];
    while (fread(&buffer, sizeof(buffer), 512, src) != 0)
    {

        if (buffer[0] == 0xff)
        {
            printf("value: %u\n",buffer[1]);
        }

        // fwrite(&b, sizeof(b), 1, dst)
    }
    // While there's still data left to read from the memory card

        // Create JPEGs from the data
}
