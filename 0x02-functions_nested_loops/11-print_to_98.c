#include "main.h"
#include "6-abs.c"
#include <stdio.h>

/**
 * prints all natural numbers from n to 98, followed by a new line
 * @i: 0
 * @n: 0
 *
 * Return: all natural numbers from n to 98
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
