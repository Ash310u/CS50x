#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long n;
    do
    {
        n = get_long("Number: ");
    }
    while (n <= 0);

    long org_n = n;
    int count = 0;
    long divisor = 10;

    int sum = 0;
    while (org_n > 0)
    {
        int lastDigit = org_n % 10;
        sum += lastDigit;
        org_n = org_n / 100;
    }

    org_n = n / 10;

    while (org_n > 0)
    {
        int lastDigit = org_n % 10;
        int multi = lastDigit * 2;
        sum += (multi % 10) + (multi / 10);
        org_n = org_n / 100;
    }

    org_n = n;
    while (org_n != 0)
    {
        org_n = org_n / 10;
        count++;
    }

    for (int i = 0; i < count - 2; i++)
    {
        divisor = divisor * 10;
    }

    int oneDigit = n / divisor;
    int twoDigit = n / (divisor / 10);

    if (sum % 10 == 0)
    {
        if (count == 15 && (twoDigit == 34 || twoDigit == 37))
        {
            printf("AMEX\n");
        }
        else if (count == 16 && (twoDigit > 50 && twoDigit < 56))
        {
            printf("MASTERCARD\n");
        }
        else if ((count == 13 || count == 16) && oneDigit == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
