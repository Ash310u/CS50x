#include <cs50.h>
#include <stdio.h>

int string_length (string s)
int main (void)
{
    string name = get_string("Name: ");
    printf("Length: %i\n", string_length(name));
}

int string_length (string s)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}
