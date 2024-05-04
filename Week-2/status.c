#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    for(int i = 0; i < argc; i++)
    {
        if(argc != 2) {
            printf("Missing command-line argument.\n");
            return 1;
        }

        if(i > 0)
        {
            printf("%s ", argv[i]);
        }
    }
    printf("\n");
}
