#include <cs50.h>
#include <stdio.h>

int main (void)
{               // jsut trying things.
    int score[3]; // = [3, 5, 6]
    score[0] = get_int("Score1: ");
    score[1] = get_int("Score2: ");
    score[2] = get_int("Score3: ");

    // If I involve only one decimal point in denominator it will promote the whole arithmetic expression to being floating point.
    printf("Average: %f\n", (score[0] + score[1] + score[2]) / 3.0);
}
