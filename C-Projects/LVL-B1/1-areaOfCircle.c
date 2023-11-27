#include <stdio.h>

//Level 3: A program that calculates the area and circumference of a circle.

#define PI 3.14159

int main()
{
    double radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle: %.2lf\n", area);
    printf("Circumference of the circle: %.2lf\n", circumference);

    return 0;
}
