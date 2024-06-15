#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc , char *argv[])
{
        printf("number: %lu\n", sizeof(*argv));
    if (sizeof(*argv) == 2)
    {
        int i = atoi(argv[1]);
        printf("number: %i\n", i);
    } else
    {
        printf("./caesar key\n");
        return 1;
    }

}
