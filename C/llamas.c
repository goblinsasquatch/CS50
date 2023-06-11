#include <stdio.h>
#include <cs50.h>

void main(void)
{
    int startSize;
    int endSize;
    do
    {
        startSize = get_int("Start size: ");
    } while (startSize < 9);
    do
    {
        endSize = get_int("End size: ");
    } while (endSize <= startSize);

    int years = 0;

    while (startSize < endSize)
    {
        startSize = startSize + (startSize / 3) - (startSize / 4);
        years++;
    }
    printf("Years: %i\n", years);
}