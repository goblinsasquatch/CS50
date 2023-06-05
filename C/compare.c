#include <stdio.h>
#include <cs50.h>

void main(void)
{
    int x = get_int("What's x: ");
    int y = get_int("What's y: ");
    if (x <= y)
    {
        printf("x is less than or equal to y\n");
    }
    else
    {
        printf("x is greater than y\n");
    }
}