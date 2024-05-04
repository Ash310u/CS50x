#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    printf("hello ");
    for(int i = 0; i < argc; i++)
    {
        if(argc >= 1 && argv[0] == 0)
        {
            printf("%s ", argv[i]);
        } else
        {
            printf("world\n");
        }
    }
    printf("\n");
}
