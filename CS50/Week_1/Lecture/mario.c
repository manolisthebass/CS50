#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // printing in a line
    
    /*for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");*/

    // printing in a row

    /*for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }*/

    // checking for negative

    /*int n = get_int("Size: ");
    while (n < 1)
    {
        n = get_int("Size: ");
    }*/

    // Get size of grid
    int n;
    do
    {
        n = get_int("Size: ");
    } while (n < 1);
    

    // Print grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}

