#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int letters_count(string text);
int words_count(string text);
int sentance_count(string text);
int grade_count(int L, int S);

int main(void)
{
    string text = get_string("Text: ");

    int num_letters = letters_count(text);
    int num_words = words_count(text);
    int num_sentances = sentance_count(text);

    printf("letters ----------------> %i\n", num_letters);
    printf("words ----------------> %i\n", num_words);

    float L = ((float) num_letters / (float) num_words) * 100;
    float S = ((float) num_sentances / (float) num_words) * 100;

    float grade = grade_count(L, S);
    int result = round(grade);
    if (result >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (result < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", result);
    }
}

int letters_count(string text)
{
    int letters_count = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        // (text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z' )
        // text[i] != '\0' && text[i] != ' ' && text[i] != '.' && text[i] != '!' && text[i] != '?'
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
        {
            letters_count++;
        }
    }
    return letters_count;
}

int words_count(string text)
{
    int words_count = 1;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ' && text[i + 1] != ' ' && text[i + 1] != '\0' && text[i] != '.')
        {
            words_count++;
        }
    }
    return words_count;
}

int sentance_count(string text)
{
    int sentances_count = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentances_count++;
        }
    }
    return sentances_count;
}

int grade_count(int L, int S)
{
    float grade = 0.0588 * L - 0.296 * S - 15.8;
    return grade;
}
