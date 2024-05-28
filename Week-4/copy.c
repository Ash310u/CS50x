 #include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");

    // char *t = s; // The Assiegnment(=) operator literarily copy the address on the 's' pointer over to 't' pointer. Both pointed at the same string location in memory.
    char *t = malloc(strlen(s)); // malloc(Memory Allocation) basically it Allocate 'some numbers(which we provied)' of bytes in the memory.

    for(int i = 0, n = strlen(s); i < n; i++)
    {
        t[i] = s[i]; // setting up the data of the string 's' to 't' at a different memory location which is allocated by the 'malloc' function.
    }

    if(strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }

    // The both are get capitalized cause the 'addresses are same'.
    printf("%s\n", s);
    printf("%s\n", t);
    printf("%i\n", t[strlen(s)]);
}
