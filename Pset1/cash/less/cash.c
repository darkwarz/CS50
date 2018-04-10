#include <stdio.h>
#include <cs50.h>
#include <math.h>

// by : Jabier Espinal
int main(void)
{
    float dollars = 0;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

    int cents = round(dollars * 100);

// Quaters
    int coins = 0;
    int quaters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennys = 0;

    while (cents >= 25)
    {
        cents -= 25;
        coins++;
        quaters++;
    }
// Dimes
    while (cents >= 10)
    {
        cents -= 10;
        coins++;
        dimes++;
    }
// Nickels
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
        nickels++;
    }
// Pennys
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
        pennys++;
    }

    printf("Change in each coin:\n - quaters %i\n - dimes %i\n - nickels %i\n - pennys %i\n", quaters, dimes, nickels, pennys);
    printf("Total number of coins: %i\n", coins);
}
