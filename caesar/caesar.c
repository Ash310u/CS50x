#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2 || atoi(argv[1]) == 0)
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }

    int key = atoi(argv[1]);
    char *plaintext = get_string("plaintext: ");

    for (int n = 0; plaintext[n] != '\0'; n++)
    {
        if (isalpha(plaintext[n]))
        {
            char c = plaintext[n];
            if (isupper(plaintext[n]))
            {
                c = (c - 'A' + key) % 26 + 'A';
            }

            if (islower(plaintext[n]))
            {
                c = (c - 'a' + key) % 26 + 'a';
            }
            plaintext[n] = c;
        }
    }

    printf("ciphertext: %s\n", plaintext);
    return 0;
}
