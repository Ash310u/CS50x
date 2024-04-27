#include <cs50.h>
#include <stdio.h>

int main(void) {
    string ans = get_string("What is your name? ");
    printf("hello, %s\n", ans);
   return 0;
}
