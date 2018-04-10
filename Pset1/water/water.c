#include <cs50.h>
#include <stdio.h>
// Made by : Jabier Espinal
int main(void)
{
//    int minutes = get_int();

// user input
    printf("How many minutes do you take in the shower?: ");

// output = input*12, how many water bottles
    printf("That much water adds up to %d 12oz water bottles: \n", (get_int() * 12));
}