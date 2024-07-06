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

            if (n <= 25)
            {
                if (isalpha((unsigned char) argv[1][n]) == 0)
                {
                    printf("Usage: ./substitution key should be Alphabet \n");
                    return 1;
                }
                n++;
                if (argv[1][n] == '\0')
                {
                    printf("Usage: ./substitution key should be 26 character\n");
                }
            }
        }
        while (n <= 25);
        if (argv[1][25] == '\0')
        {
            cipherText = argv[1];
        }
    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    printf("value: %s\n", cipherText);
    return 0;
}
