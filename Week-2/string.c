#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string s = get_string("Input:  ");

    printf("Output: ");
    // Here I'm calling the 'strlen' function(which is also using a loop for finding the string's length) in the 'initialization part' of my for loop,
    // So that the strlen function is not get calling again and again...
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
