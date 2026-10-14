#pragma warning(disable: 4996)
#include <stdio.h>
#include <math.h>

int main()
{
    double angle, sin_val, cos_val, tan_val;

    printf("Enter angle (in radians): ");
    scanf("%lf", &angle); // Prompt user to enter angle in radians

    // Calculate sin, cos, and tan values
    sin_val = sin(angle);
    cos_val = cos(angle);
    tan_val = tan(angle);

    printf("sin(%.2lf) = %lf\n", angle, sin_val);
    printf("cos(%.2lf) = %lf\n", angle, cos_val);
    printf("tan(%.2lf) = %lf\n", angle, tan_val);

    return 0;
}
