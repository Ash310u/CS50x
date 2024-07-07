#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char *cipherText[26];
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
            if (argv[1][26] == '\0')
            {
                cipherText[0] = &argv[1][0];
            }
            else {
                printf("Usage: ./substitution key should be 26 character\n");
                return 1;
            }
            // for(int i = 0; i <= n; i++)
            // {
            //     if (&argv[1][n] ==  cipherText[i]) {
            //         printf("value: %s == %s\n", cipherText[i], &argv[1][n]);
            //     }
            // }
            n++;
        }
        while (n <= 25);
        printf("value: %p == %p\n", cipherText[0], &argv[1][0]);
    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    printf("value: %s\n", *cipherText);
    return 0;
}
