#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    node *list = NULL;
    node *n

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);
        n->number = number
        printf("%i\n", number);
    }
}
