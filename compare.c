#include <cs50.h>
#include <stdio.h>

int main(void) {
    int num = 58;
    int guess = get_int("Guess a Number? (You Have Three Chances) Your Answer -> ");
    if (guess < num)
    {
        printf("Guess number is lesser than Orginal number \n");
        guess = get_int("Guess a Number? ");
    }
    if(guess > num)
    {
        printf("Guess number is greater than Orginal number \n");
        guess = get_int("Guess a Number? ");
    }
    printf("Ta-daa %i\n", guess);
   return 0;
}
