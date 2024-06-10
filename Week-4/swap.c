#include <stdio.h>

int swap(int *a, int *b);
int main(void)
{
    int x = 1;
    int y = 2;
    printf("Before Swapping x = %i, y = %i \n", x, y);
    printf("Before Swapping x = %p, y = %p \n", &x, &y);

    swap(&x, &y);

    printf("Before Swapping x = %i, y = %i \n", x, y);
    printf("Before Swapping x = %p, y = %p \n", &x, &y);
    printf("%n\n", *x);
}

int swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return 0;
};
