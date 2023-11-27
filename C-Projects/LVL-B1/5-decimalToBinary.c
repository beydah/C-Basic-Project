#include <stdio.h>

// Level 3: A program that finds the binary representation of an integer entered by the user

void toBinary(int number)
{
	int i;
	int binary[64];

	for (i = 0; number > 0; i++)
	{
		binary[i] = number % 2;
		number /= 2;
	}

	printf("Binary Equivalent: ");
	for (; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}

	return 0;
}

int main()
{
	int number;

	do
	{
		printf("Enter an Integer: ");
		scanf("%d", &number);

		if (number <= 0)
		{
			printf("Please enter only positive integers.\n");
		}
	} while (number <= 0);

	toBinary(number);

	return 0;
}
