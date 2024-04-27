#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree , y/n ");

        if (c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n')
    {
        printf("Not agreed.\n");
    }
}
