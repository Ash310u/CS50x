#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // int i = get_int("i: ");
    // int j = get_int("j: ");

    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // When you compare literarily (s == t), You are basically comparing two different addresses of memories of two different located strings in memory.
    // if(s == t) {}

    printf("%i\n", strcmp(s,t));
    if (strcmp(s,t) == 0) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }
}
