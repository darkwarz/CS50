#include <stdio.h>
#include <cs50.h>
/*
made by Jabier  Espinal 4/7/2018
*/
int main(void)
{
// Declare and intialize variables
    int p_height = 0;

// Takes user input, checks it and then goes through the loop, if 0 exits out of the application
    do
    {
        printf("Height:");
        p_height = get_int();
        if (p_height == 0)
        {
            return 0;
        }

    }
// sets the user limits
    while (p_height < 1 || p_height > 23);

//This loop handles count of rows to print.
    for (int i = 0; i < p_height; i++)
    {
// This loop Prints the required spaces
        for (int j = 0; j < 2 * p_height + 2; j++)

            if (j - i >= p_height + 3)
//ends first pyramid

            {
                printf("");
            }

//creates middle and second pyramid
            else if ((j == p_height || j == p_height + 1) || i + j < (p_height - 1))

            {
                printf(" ");
            }

            else

            {
                printf("#");
            }

// prints next line

        {
            printf("\n");
        }

    }

}