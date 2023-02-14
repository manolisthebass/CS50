#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    // printf("%li\n, x + y");

    // solution to truncation (float z instead of long)
    // solution to type casting and  (change x and y from int to float)
    // solution to floating point imprecision (use double instead of float)
    double z = (double) x / (double) y;
    printf("%.20f\n", z);   // test comment
}