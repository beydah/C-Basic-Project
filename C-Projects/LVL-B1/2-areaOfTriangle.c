#include <stdio.h>
#include <math.h>

//Level 3: A program that calculates the area of an equilateral triangle.

int main()
{
    double side, area;

    printf("Enter the length of the side of the equilateral triangle: ");
    scanf("%lf", &side);

    area = (sqrt(3) / 4) * side * side;

    printf("Area of the equilateral triangle: %.2lf\n", area);

    return 0;
}
