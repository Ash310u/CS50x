#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // sizeof : Generates the storage size of an expression or a data type, measured in the number of char-sized units
    int *x = malloc(3 * sizeof(int));

    x[0] = 73;
    x[1] = 74;
    x[2] = 33;

    // free(0);
}
