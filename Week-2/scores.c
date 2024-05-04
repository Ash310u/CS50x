#include <stdio.h>

int main (void)
{               // jsut trying things.
    int score[3]; // = [3, 5, 6]
    score[0] = 457;
    score[1] = 245;
    score[2] = 532;

    // If I involve only one decimal point in denominator it will promote the whole arithmetic expression to being floating point.
    printf("Average: %f\n", (score[0] + score[1] + score[2]) / 3.0);
}
