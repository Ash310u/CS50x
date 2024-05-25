#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int letters_count(string text);
int words_count(string text);
int sentance_count(string text);
int grade_count(string text);

int main(void)
{
    string text = get_string("Text: ");

    int num_letters = count_words(text);
    int num_words = count_words(text);

}

int letters_count(string text)
{
    // Return the number of letters in text
}

int words_count(string text)
{
    // Return the number of words in text
}

int sentance_count(string text)
{
    // Return the number of words in text
}

int grade_count(int L, int S)
{

    int grade = 0.0588 * L - 0.296 * S - 15.8
}
