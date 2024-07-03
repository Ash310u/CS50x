#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char *cipherText[26];
    if (argc == 2)
    {
        int n = 0;
        while (n == 26)
        {
            if (isalpha((unsigned char) argv[1][n]) == 0)
            {
                printf("Usage: ./substitution key should be Alphabet \n");
                return 1;
            }
            else
            {
                *(cipherText+n) = &argv[1][n];
                printf("Usage: ./substitution keylength = ff %i\n", n);
                n++;
            }
        }
    }
    else
    {
        printf("Usage: ./substitution keylength = 26 \n");
        return 1;
    }
    // printf("value: %s\n", *(cipherText));
    return 0;
}
