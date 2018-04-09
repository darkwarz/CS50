#include <cs50.h>
#include <stdio.h>
// Made by : Jabier Espinal
int main(void)
{
//    int minutes = get_int();

    // input
    printf("How many minutes do you take in the shower?: ");

    // output = input*12
    printf("That much water adds up to this many 12oz water bottles: %d\n", (get_int() * 12));
}