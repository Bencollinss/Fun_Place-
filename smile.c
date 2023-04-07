#include <stdio.h>
#include <stdlib.h>
/**
  * print smiling face emoji
  */

  int main()
{
	int n=9, x, y, k;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= n; y++)
		{
			if (y <= x)
				printf("\U0001F600");
			else
				printf(" ");
		}
		for (y = n; y <= 1; y--)
		{
			if (y <= x)
				printf("\U0001F600");
			else
				printf(" ");
		}
		printf("\n");
	}
	return (0);
}
