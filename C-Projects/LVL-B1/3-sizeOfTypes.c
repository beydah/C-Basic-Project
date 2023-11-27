#include <stdio.h>

//Level 3: //A program that determines the sizes (in bytes) of data types

int main()
{
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of void: %lu bytes\n", sizeof(void));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Size of unsigned char: %lu bytes\n", sizeof(unsigned char));
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    
    return 0;
}
