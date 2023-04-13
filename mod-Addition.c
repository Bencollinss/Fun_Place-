/**
  * intro - Creating an addition calculator
  *
  */
#include "main.h"

/**
  * main - A function that adds numbers
  *
  * Return: Always 0
  */

int main(void)
{
	float sum = 0;
	float num[2] = {0,0};
	int i = 0;
	int k = 0;

	printf("HELLO AND WELCOME TO MY ADDITION CALCULATOR\n\n");
	printf("---------------------------------------------\n");

	printf("Input The Numbers you want to add: ");

/**
  * Accepts the numbers
  *
  */

	for (i = 0; i < 2; i++)
	{
		scanf("%f", &num[i]);
	}
/**
  * Calculates the sum of the numbers
  */
	for (k = 0; k < 2; k++)
	{
		sum = sum + num[k];
	}

	printf("The sum of your numbers is [%f]\n", sum);

	return (0);
}
