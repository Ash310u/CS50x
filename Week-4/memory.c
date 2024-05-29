#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));

    x[0] = 73;
    x[0] = 73;
    x[0] = 73;
    printf("%i\n", x[12]);
}
