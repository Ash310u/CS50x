#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string names[] = {"Ashu", "Ritwik", "Ypk"};
    string numbers[] = {"+91-765-585-2770", "+91-825-585-7848", "+91-765-585-7848"};

    string s = get_string("Name: ");
    for(int i = 0; i < 3; i++)
    {
        if(strcmp(names[i], s)==0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
