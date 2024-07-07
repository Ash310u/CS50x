#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char *cipherText[26];
    if (argc == 2)
    {
        int n = 0;
        if (argv[1][26] != '\0')
        {
            printf("Usage: ./substitution key should be 26 character\n");
            return 1;
        }
        do
        {

            if (isalpha((unsigned char) argv[1][n]) == 0)
            {
                printf("Usage: ./substitution key should be Alphabet \n");
                return 1;
            }
            *(cipherText + n) = &argv[1][n];
            n++;
        }
        while (n <= 25);
    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    printf("value: %s\n", *cipherText);
    return 0;
}
