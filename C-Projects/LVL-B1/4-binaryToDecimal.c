#include <stdio.h>

//Level 3: A program that finds the decimal equivalent of a binary number entered by the user

void binaryToInt(int binary)
{
    int decimal = 0;
    int position = 1;

    while (binary > 0)
    {
        int digitValue = binary % 10;

        decimal += digitValue * position;
        binary /= 10;
        position *= 2;
    }

    printf("Decimal Number: %d\n", decimal);
}

int main()
{
    int binary;

    printf("Enter a Binary Number: ");
    scanf("%d", &binary);

    binaryToInt(binary);

    return 0;
}
