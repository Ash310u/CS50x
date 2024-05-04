#include <cs50.h>
#include <stdio.h>

int main (void)

{
    int n = get_int("Scores Types: ");
                   // jsut trying things.
    int score[3]; // = [3, 5, 6]
    for(int i = 0; i < n; i++)
    {
        score[i] = get_int("Score2: ");
    }

    // If I involve only one decimal point in denominator it will promote the whole arithmetic expression to being floating point.
    printf("Average: %f\n", (score[0] + score[1] + score[2]) / 3.0);
}
