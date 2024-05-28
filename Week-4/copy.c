 #include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t = s; // The Assiegnment(=) operator literarily copy the address on the 's' pointer over to 't' pointer.

    if(strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }

    // The both are get capitalized cause the 'addresses are same'.
    printf("%s\n", s);
    printf("%s\n", t);
}
