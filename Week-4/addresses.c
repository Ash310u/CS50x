#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;

    // string : char with "*" which store the address of the first character of a string & '\0' indicates the end of a string.
    char *s = "Hi!";
    printf("%p\n",  s);
    printf("%p\n",  &s[0]);
    printf("%p\n",  *(s + 1));

    printf("-------------------\n");

    // char : just a single character.
    char g = 'G';
    printf("%p\n",  &g);
    printf("%p\n",  &g);
}
