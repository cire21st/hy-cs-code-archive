#include <stdio.h>

// Function to calculate the area of a triangle
double triangleArea(double base, double height);

double triangleArea(double base, double height)
{
    return (base * height) / 2.0;
}

int main()
{
    double base = 10.0, height = 5.0;
    double area = 0.0;

    area = triangleArea(base, height);

    printf("When the base of the triangle is %.2lf and the height is %.2lf, \n", base, height);
    printf("The area of the triangle is %.2lf.\n", area);

    return 0;
}
