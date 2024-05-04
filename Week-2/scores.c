#include <stdio.h>

int main (void)
{
    int score1 = 243;
    int score2 = 533;
    int score3 = 342;

    // If I involve only one decimal point in denominator it will promote the whole arithmetic expression to being floating point.
    printf("Average: %f%d\n", (score1 + score2 + score3) / (double) 3.0);
}
