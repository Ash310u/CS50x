#include <stdio.h>
#include <cs50.h>

int main (void) {
    int number[] = {10,200,100,25,50,5,500};

    int n = get_int("Number: ");
    for(int i = 0; i < 7; i++)
    {
        if( number[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
