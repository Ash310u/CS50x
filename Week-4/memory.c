#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(sizeof(int));

    x[0] = 73;
    x[1] = 74;
    x[2] = 33;
    printf("%i\n", x[0]);
}
