#include <stdio.h>
#include <cs50.h>
/*
made by Jabier  Espinal
Career devs student / cs50 student - 4/7/2018
*/
int main(void)
{
		// Declare and intialize variables
	int p_height = 0;

		// Takes user input, checks it and then goes through the loop, if 0 exits out of the application
	do {
		printf("Height:");
		p_height = get_int();
        if (p_height == 0)
        {
            return 0;
        }
        // sets the user limits
	} while (p_height < 1 || p_height > 23);

		//This loop handles count of rows to print.
	for(int i = 0; i < p_height; i++)
	{
		// This loop Prints the required spaces
        for(int j = 0; j < p_height-i-1; j++)
        {
            printf("%s", " ");
        }
        // This loop Prints the '#' character. +2 as border value because of starting 2 blocks
		for(int k = 0; k < i+2; k++)
		{
		// prints hash tag
			printf("#");
		}
		// prints next line
		printf("\n");
	}

	return 0;

}