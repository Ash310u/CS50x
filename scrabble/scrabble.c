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
    if(score_1 > score_2) {
        printf("Player 1 wins")
    } else if(score_1 < score_2) {
        printf("Player 1 wins")
    }
    
}

int compute_score (string word)
{
    for(int i = 0; i < strlen(word); i++)
    {
        int point = tolower(word[i]);
        int sum = 0;
        if(point >= 97 && point <= 122)
        {
            sum += POINTS[point - 97]
        }
        return sum
    }
    return 0;
}
