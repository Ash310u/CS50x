#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);
int main(void)
{
    // Prompt the user for two words
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Compute the score of each word
    int score_1 = compute_score(word1);
    int score_2 = compute_score(word2);
    // Print the winner
    printf("%i!\n", score_1);
    printf("%i!\n", score_2);
    if (score_1 > score_2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score_1 < score_2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}

int compute_score (string word)
{
    int sum = 0;
    for(int i = 0; i < strlen(word); i++)
    {
        int point = tolower(word[i]);
        if(point >= 'a' && point <= 'z')
        {
            sum += POINTS[point - 'a'];
        }
    }
    return sum;
}
