#include <cs50.h>
#include <stdio.h>

int get_start_size(void);
int get_end_size(int start);
int calculate_years(int start, int end);
void print_years(int years);


int main(void)
{
    // Prompt for start size
    int startSize = get_start_size();

    // Prompt for end size
    int endSize = get_end_size(startSize);

    // Calculate number of years until we reach threshold
    int years = calculate_years(startSize, endSize);

    // Print number of years
    print_years(years);
}

int get_start_size(void)
{
    int n;
    do
    {
        n = get_int("Start population size: ");
    } while (n < 9);
    return n;
}

int get_end_size(int start)
{
    int n;
    do
    {
        n = get_int("End population size: ");
    } while (n < start);
    return n;
}

int calculate_years(int start, int end)
{
    // The population rule: Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.
    int n;  // n are the years requiered to get to the end population size
    while (start < end)
    {
        n++;
        start = start + (start / 3) - (start / 4);
    }
    return n;
}

void print_years(int years)
{
    printf("The years needed are: %i\n", years);
}
