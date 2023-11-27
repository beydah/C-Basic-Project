#include <stdio.h>

// Level 2: A program that prints palindrome numbers within a specified range.

int main()
{
    int start, end, number, reversedNumber, remainder, originalNumber;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Palindrome numbers between %d and %d are:\n", start, end);

    for (number = start; number <= end; number++)
    {
        reversedNumber = 0;
        originalNumber = number;

        while (originalNumber != 0)
        {
            remainder = originalNumber % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            originalNumber /= 10;
        }

        if (number == reversedNumber)
        {
            printf("%d\n", number);
        }
    }

    return 0;
}
