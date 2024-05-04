#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string s = get_string("Input:  ");
    int length = strlen(s);

    printf("Output: ");
    for (int i = 0; i < length; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
