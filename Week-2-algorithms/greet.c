#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    for(int i = 0; i < argc; i++)
    {
        if(argc == 1) {
            printf("hello world");
        }

        if(i > 0)
        {
            printf("%s ", argv[i]);
        }
    }
    printf("\n");
}
