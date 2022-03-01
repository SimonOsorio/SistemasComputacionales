#include <stdio.h>
int main(void)
{
    char name[40];
    printf("What is your name? ");
    if (fgets(name, 40, stdin) != NULL)
    {
        printf("Hello %s!\n", name);
    }
}