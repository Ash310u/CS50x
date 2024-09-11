#include <stdio.h>
#include <stdlib.h>

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

    BYTE b;
    while (fread(&b, sizeof(b), 512, src) != 0)
    {
        if (b == )

        fwrite(&b, sizeof(b), 1, dst)
    }
    // While there's still data left to read from the memory card

        // Create JPEGs from the data
}
