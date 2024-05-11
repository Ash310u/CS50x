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

    for (int i = 0; i < count; i++)
    {
        divisor = divisor * 10;
    }

    int firstDigit = n / divisor;
    int secondDigit = n / (divisor / 10);

    if (sum % 10 == 0)
    {
        printf("VISA\n");
    }
    if (count = 15)
    {
    }
    else
    {
        printf("INVALID \n");
    }
}
