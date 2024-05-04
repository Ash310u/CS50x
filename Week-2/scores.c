#include <cs50.h>
#include <stdio.h>

int main (void)

{
    const int N = 3;
    int scores[N];

    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        int value = get_int("Score %i: ", i + 1);
        scores[i] = value;
        sum += value;
    }

    // If I involve only one decimal point in denominator it will promote the whole arithmetic expression to being floating point.
                          // Oooohw I forgot that i can cast as floating point
    printf("Average: %f\n", sum / (float) N );
}
