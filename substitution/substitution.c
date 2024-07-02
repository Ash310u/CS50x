#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char *cipherText;
    if (argc == 2)
    {
        int n = 0;
        while (n < 26)
        {
            if (isalpha((unsigned char) argv[1][n]) == 0)
            {
                printf("Usage: ./substitution key \n");
                return 1;
            }
            else
            {
                n++;
            }
        }
    }
    else
    {
        printf("Usage: ./substitution keylength = 26 \n");
        return 1;
    }
    return 0;
}
