#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Accept a single command-line argument

    // Open the memory card
    FILE *src = fopen("card.raw","r");
    if (src == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }

    // While there's still data left to read from the memory card

        // Create JPEGs from the data
}
