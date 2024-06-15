#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc , char *argv[])
{
    int i = 0;
    if (argv[1] && atoi(argv[1]) == 0 )
    {
        i = atoi(argv[1]);
        printf("%i\n", i);
        return 0;
    }
    printf("Usage: ./caesar key\n");

}
