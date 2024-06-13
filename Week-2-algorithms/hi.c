#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string words[2];
    words[0] = "Hi!";
    words[1] = "Bye!";
    // printf("%s\n", words[0]);
    // printf("%s\n", words[1]);
    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
    printf("%c%c%c\n", words[1][0], words[1][1], words[1][2]);
}
