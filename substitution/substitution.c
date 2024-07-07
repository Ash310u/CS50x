#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char *cipherText;
    if (argc == 2)
    {
        int n = 0;
        do
        {
            if (isalpha((unsigned char) argv[1][n]) == 0)
            {
                printf("Usage: ./substitution key should be Alphabet \n");
                return 1;
            }
            for(int i = 0; i <= n; i++)
            {

                if (argv[1][i] == argv[1][n])
                {
                    // printf("Usage: 26 Unique Alphabet\n");
                    printf("value: %c\n", argv[1][n]);

                }
            }
            if (argv[1][26] == '\0')
            {
                printf("Usage: ./substitution key should be 26 character\n");
                return 1;
            }
            else {
                cipherText[n] = *argv[1][n];
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
    printf("value: %p == %p\n", *cipherText[0], *argv[1][0]);
    return 0;
}
