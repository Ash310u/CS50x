#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int letters_count(string text);
int words_count(string text);
int sentance_count(string text);
int grade_count(int L,int S);

int main(void)
{
    string text = get_string("Text: ");

    int num_letters = letters_count(text);
    int num_words = words_count(text);
    int num_sentances = sentance_count(text);
    // printf("%i\n", num_words);
}

int letters_count(string text)
{
    // Return the number of letters in text
    return 0;
}

int words_count(string text)
{
    for(int i = 0; i < strlen(text); i++)
    {
        if(text[i] == ' ' && text[])
    }
    return 0;
}

int sentance_count(string text)
{
    // Return the number of words in text
    return 0;
}

int grade_count(int L, int S)
{

    // int grade = 0.0588 * L - 0.296 * S - 15.8
    return 0;
}
