#include <stdio.h>
#include <cs50.h>
#include <math.h>

// by : Jabier Espinal
int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while(dollars < 0);

    int cents = round(dollars * 100);
// Quaters
    int coins = 0;
    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }
// Dimes
    while (cents >= 10)
    {
        cents -=10;
        coins++;
    }
// Nickels
    while (cents >= 5)
    {
        cents -=5;
        coins++;
    }
// Pennys
    while (cents >= 1)
    {
        cents -=1;
        coins++;
    }

    printf("%i\n", coins);
}
