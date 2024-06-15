#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc , char *argv[])
{
    if ((!argv[1] || atoi(argv[1]) == 0) || argv[2])
    {
        printf("Usage: ./caesar key \n");
        return 0;
    }

    int i = atoi(argv[1]);
    char *plaintext = get_string("plaintext: ");

    for(int n = 0; plaintext[n] != '\0'; n++)
    {
        if(isalpha(plaintext[n]))
        {
            char c = *(plaintext + n);
            if(isupper(c))
            {
                int value = c + i;
                if (value > 90)
                {
                    value = value - 26;
                }
                if (value < 65)
                {
                    value = value + 26;
                }
                printf("%c\n", value);
            }

            if(islower(c))
            {
                char value = c + i;
                if (value > 122)
                {
                    value = value - 26;
                }
                if (value < 97)
                {
                    value = value + 26;
                }
                printf("%c\n", value);
            }

        } else
        {
            printf("%c\n", plaintext[n]);
        }
    }

}
