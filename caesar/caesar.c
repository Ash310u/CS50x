#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if ((!argv[1] || atoi(argv[1]) == 0) || argv[2])
    {
        printf("Usage: ./caesar key \n");
        return 0;
    }

    int i = atoi(argv[1]);
    char *plaintext = get_string("plaintext: ");
    char *ciphertext = ;
    for (int n = 0; plaintext[n] != '\0'; n++)
    {
        if (isalpha(plaintext[n]))
        {
            int c = plaintext[n];
            if (isupper(plaintext[n]))
            {
                c = (c - 'A' + i) % 26 + 'A';
            }

            if (islower(plaintext[n]))
            {
                c = (c - 'a' + i) % 26 + 'a';
                printf("%c\n", c);
                printf("%i\n", c);
            }
            ciphertext[n] = c;
        }
    }
    printf("ciphertext: %s\n", ciphertext);
}
