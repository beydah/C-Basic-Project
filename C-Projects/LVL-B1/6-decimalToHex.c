#include <stdio.h>

// Decimal to Hexadecimal

int main()
{
    int decNumber, remainder, i = 0;

    char hexNumber[500];
    char extraNumber[6] = {'A', 'B', 'C', 'D', 'E', 'F'};

    printf("Enter a Decimal Number: ");
    scanf("%d", &decNumber);

    do
    {
        remainder = decNumber % 16;
        decNumber /= 16;

        if (remainder < 10)
        {
            hexNumber[i] = remainder + '0';
        }
        else
        {
            remainder -= 10;
            hexNumber[i] = extraNumber[remainder];
        }

        i++;
    }
    while (decNumber != 0);

    printf("Hexadecimal is: ");
    for (i -= 1; i >= 0; i--)
    {
        printf("%c", hexNumber[i]);
    }

    return 0;
}
