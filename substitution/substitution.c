#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *p = &argv[1][0];
    char *substitution[26];
    if (argc == 2)
    {
        int n = 0;
        if (argv[1][26] != '\0')
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
        do
        {
            if (isalpha((unsigned char) argv[1][n]) == 0)
            {
                printf("Key must only containing alphabetic characters. \n");
                return 1;
            }
            *(substitution + n) = &p[n];
            for (int i = n + 1; i <= n + 1; i++)
            {
                if (tolower(*substitution[n]) == tolower(argv[1][i]))
                {
                    printf("Key must not contain repeated character.\n");
                    return 1;
                }
            }
            n++;
        }
        while (n <= 25);
    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    char *alphabetArr[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m",
                             "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

    char *plainText = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0, length = strlen(plainText) - 1; i <= length; i++)
    {
        for (int n = 0; n <= 25; n++)
        {
            if (tolower(plainText[i]) == tolower(*alphabetArr[n]))
            {
                if (plainText[i] >= 65 && plainText[i] <= 90)
                {
                    printf("%c", toupper(*substitution[n]));
                }
                else if (plainText[i] >= 97 && plainText[i] <= 122)
                {
                    printf("%c", tolower(*substitution[n]));
                }
            }
        }
        if ((plainText[i] < 65 || plainText[i] > 90) && (plainText[i] < 97 || plainText[i] > 122))
        {
            printf("%c", plainText[i]);
        }
    }
    printf("\n");
    return 0;
}
