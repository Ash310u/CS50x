#include <stdio.h>
#include <ctype.h>

int main(int argc , char *argv[])
{
    for(int n = 0; n < 26; n++)
    {
        // if(argc != 26 || isalpha(argv[]))
        printf("%i\n",isalpha((unsigned char)argv[1][n]));

    }
// printf("%i\n",isalpha((unsigned char)argv[1]));
    return 0;
}
