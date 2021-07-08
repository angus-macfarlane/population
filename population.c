#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do
    {
        start_size = get_int("Enter a starting population: \n");
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("Enter the ending population: \n");
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    // year 0 == start size, year 1 == startsize + (startsize/3) - (startseize/4), year 2 == year1 + (year1/3) - (year1/4), etc. until year(n) == end_size
    int population = 0;
    int year = 0;
    if (start_size == end_size)
    {
        printf("Years: 0\n");
    }
    else 
    {
        do
        {
            population = start_size + (start_size / 3) - (start_size / 4);
            start_size = population;
            year++;
        }
        while (population < end_size);
        // TODO: Print number of years
        printf("Years: %d\n", year);
    }

    
}
