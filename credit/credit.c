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

    int sum = 0;
    while (org_n > 0)
    {
        int lastDigit = org_n % 10; 123456789
        sum += lastDigit; 9 + 7 + 5 + 3 + 1 = 25
        org_n = org_n / 100; // 0
    }

    org_n = n / 10; 12345678

    while (org_n > 0)
    {
        int lastDigit = org_n % 10; 1234
        int multi = lastDigit * 2; 8*2, 6*2, 4*2
        sum += (multi % 10) + (multi / 10); 25 + (6 + 1) + (2 + 1) + (8 + )
        org_n = org_n / 100; 1234
    }

    if (sum % 10 == 0)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID \n");
    }
}
