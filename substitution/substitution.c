#include <stdio.h>
#include <ctype.h>

int main(int argc , char *argv[])
{
    if (argc != 2)
    {
        int n = 0;
        while (n < 26)
        {
            if(isalpha((unsigned char)argv[1][n]) == 0)
            {
                printf("Usage: ./substitution key \n");
                return 1;
            } else
            {
                printf("%i\n", argc);
                n++;
            }

        }
    } else {
        printf("Usage: ./substitution \n");
        return 1;
    }
    return 0;
}
