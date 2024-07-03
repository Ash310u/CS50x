#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char *cipherText[26];
    if (argc == 2)
    {
        int n = 0;
        while (n != 26)
        {
            if (isalpha((unsigned char) argv[1][n]) == 0)
            {
                printf("Usage: ./substitution key should be Alphabet \n");
                return 1;
            }
            else
            {
                if (n = 26)
                {
                    printf("Usage: ./substitution key length = 26, %i\n", n);
                } else
                {
                    *(cipherText + n) = &argv[1][n];
                    n++;
                }
            }
        }
    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    // printf("value: %s\n", *(cipherText));
    return 0;
}
