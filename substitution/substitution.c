#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int n = 0;
    char *cipherText[26];
    if (argc == 2)
    {
        while (n < 26)
        {
            if (isalpha((unsigned char) argv[1][n]) == 0)
            {
                printf("Usage: ./substitution key should be Alphabet \n");
                return 1;
            }
            else
            {
                if (n < 26)
                {
                    *(cipherText + n) = &argv[1][n];
                    printf("Usage: ./substitution key length = 26, %i = %c\n", n, argv[1][n]);
                    n++;
                }
                else
                {
                    printf("Usage: ./substitution key length = 26, %i\n", n);
                    return 1;
                }
            }
        }
    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    printf("value: %c\n", *(cipherText[n]));
    return 0;
}
