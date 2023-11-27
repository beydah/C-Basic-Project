#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binaryNumber);
int decimalToHexadecimal(int decimalNumber);

int main() {
    long long binaryNumber;
    
    printf("Enter the binary number: ");
    scanf("%lld", &binaryNumber);
    
    int decimalNumber = binaryToDecimal(binaryNumber);
    decimalToHexadecimal(decimalNumber);
    
    return 0;
}

int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;
    
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    
    return decimalNumber;
}

int decimalToHexadecimal(int decimalNumber) {
    int remainder, quotient;
    int i = 1, j, temp;
    char hexadecimalNumber[100];
    
    quotient = decimalNumber;
    
    while (quotient != 0) {
        temp = quotient % 16;
        
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        
        hexadecimalNumber[i++] = temp;
        quotient = quotient / 16;
    }
    
    printf("Hexadecimal number: ");
    
    for (j = i - 1; j > 0; j--)
        printf("%c", hexadecimalNumber[j]);
    
    return 0;
}
