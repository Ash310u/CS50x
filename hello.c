#include <cs50.h>
#include <stdio.h>

int main(void) {
    // string answer = get_string("What is your name? ");
    int num = 58;
    int guess = get_int("Guess a Number? ");
    if (guess < num)
    {
        printf("Guess number is lesser than Orginal number \n");
        guess = get_int("Guess a Number? ");
    } else if(guess > num)
    {
        printf("Guess number is greater than Orginal number \n");
        guess = get_int("Guess a Number? ");
    } else
    {
        printf("Ta-dha %i\n", guess);
    }
    guess = get_int("Guess a Number? ");
   return 0;
}
