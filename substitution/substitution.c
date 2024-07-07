#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char *p = &argv[1][0];
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
            *(cipherText + n) = &p[n];
            for (int i = 0; i <= n; i++)
            {
                if (*cipherText[n] == argv[1][i])
                {
                    printf("Usage: 26 Unique Alphabet\n");
                    printf("value: %c, %s\n", argv[1][i], cipherText[n]);
                    return 1;
                }
            }
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
