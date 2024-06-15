#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc , char *argv[])
{
    if (!argv[1] || atoi(argv[1]) == 0 )
    {
    printf("Usage: ./caesar key\n");
        return 0;
    }

    int i = atoi(argv[1]);
    char *sentance = get_string("plaintext: ")
    while ()

}
