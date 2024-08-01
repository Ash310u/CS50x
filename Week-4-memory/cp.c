#include <stdint.h>
#include <stdio.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    FILE *src = fopen(argv[1], "rb");
    FILE *dst = fopen(argv[2], "wb");

    BYTE b;

    while (fread(&b, sizeof(b), 1, src) != 0)
    {
        fwrite(&b, sizeof(b), 1, dst);
    };

    fclose(src);
    fclose(dst);

    // FILE *file = fopen(argv[1], "rb");
    // if (!file)
    // {
    //     perror("File opening failed");
    //     return 1;
    // }

    // size_t result;
    // int buffer[10];

    // result = fread(buffer, sizeof(int), 10, file);
    // if (result != 10)
    // {
    //     if (feof(file))
    //     {
    //         printf("End of file reached.\n");
    //     }
    //     else if (ferror(file))
    //     {
    //         perror("Error reading from file");
    //     }
    // }
    // else
    // {
    //     printf("result: %zu\n", result);
    //     printf("Successfully read 10 integers.\n");
    // }

    // fclose(file);
    // return 0;
}
