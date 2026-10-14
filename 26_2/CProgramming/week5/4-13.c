#pragma warning(disable: 4996)
#include <stdio.h>
#include <math.h>

int main()
{
    double num, sqrt_val, pow_val, log_val;
    printf("Enter a real number: ");
    scanf("%lf", &num);

    sqrt_val = sqrt(num); // Calculate square root using sqrt()
    pow_val = pow(num, 2); // Calculate square using pow()

    // Calculate natural logarithm using log() (input must be positive)
    if (num <= 0) {
        printf("Cannot calculate logarithm for values less than or equal to 0.\n");
    }
    else {
        log_val = log(num);
        printf("Square root of %.2lf = %lf\n", num, sqrt_val);
        printf("%.2lf squared = %lf\n", num, pow_val);
        if (num > 0) {
            printf("Natural logarithm of %.2lf = %lf\n", num, log_val);
        }
    }
    return 0;
}
