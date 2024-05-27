#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 50;
    int *p = &n;

    char *s = "Hi!";

    printf("%p\n",  s);
    printf("%p\n",  &s[0]);
}
