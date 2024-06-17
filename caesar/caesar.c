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

    for (int n = 0; plaintext[n] != '\0'; n++)
    {
        if (isalpha(plaintext[n]))
        {
            char *c = &plaintext[n];
            printf("%i\n", *c);
            if (i > 0 && i < 26)
            {
                *c = *c + i;
                printf("%i\n", *c);
            }
            if (isupper(*c))
            {
                *c = *c + i;
                if (*c > 90)
                {
                    *c = *c - 26;
                }
                if (*c < 65)
                {
                    *c = *c + 26;
                }
            }

            if (islower(*c))
            {
                // printf("%i\n", *c);
                *c = *c + i;
                // printf("%i\n", *c);
                if (*c > 122)
                {
                    *c = *c - 26;
                }
                if (*c < 97)
                {
                    *c = *c + 26;
                }
            }
        }
    }
    printf("ciphertext: %s\n", plaintext);
}
