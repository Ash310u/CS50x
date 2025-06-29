 #include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");
    if(s == NULL)
    {
        return 1;
    }
    // char *t = s; // The Assiegnment(=) operator literarily copy the address on the 's' pointer over to 't' pointer. Both pointed at the same string location in memory.
    // We have '+ 1' because the 'strlen()' returns human visual length not the actual length with counting '\0'(NUL).
    char *t = malloc(strlen(s) + 1); // malloc(Memory Allocation) basically it Allocate 'some numbers(which we provied)' of bytes in the memory.
    if(t == NULL) // 'NULL' it is an address and it's literarily the address ZERO(0).
    {
        return 1;
    }

    // We have to set 'i <= n' not 'i < n', Because the 'strlen()' returns human visual length not the actual length with counting '\0'(NUL).
    // for(int i = 0, n = strlen(s); i <= n; i++)
    // {
    //     t[i] = s[i]; // setting up the data of the string 's' to 't' at a different memory location which is allocated by the 'malloc' function.
    // }
    strcpy(t,s);

    if(strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }

    // The both are get capitalized cause the 'addresses are same'.
    printf("%s\n", s);
    printf("%s\n", t);
    printf("%lu\n", strlen(s));

    // basically free the allocated memory by using 'malloc' function over 't'.
    free(t);
}
