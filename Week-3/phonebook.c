#include <cs50.h>
#include <stdio.h>
#include <string.h>

// create a new Data Structure
typedef struct
{
    string name;
    string number;
}
person;

int main (void)
{
    person people[3];

    people[0].name = "Ashu";
    people[0].number = "+91-765-585-2770";

    people[1].name = "Ritwik";
    people[1].number = "+91-825-585-7848";

    people[2].name = "Ypk";
    people[2].number = "+91-765-585-7848";

    string s = get_string("Name: ");
    for(int i = 0; i < 3; i++)
    {
        if(strcmp(people[i].name, s)==0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
