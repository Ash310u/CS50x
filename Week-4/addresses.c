#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 50;
    int *p = &n;

    string s = "Hi!";
    string *q = &s;

    printf("%p\n",  *&s);
    printf("%p\n",  *q);
}
