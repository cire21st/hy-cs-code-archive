#include <stdio.h>

// Function to calculate factorial of a number
long factorial(int n);

long factorial(int n)
{
    long fac = 1;
    for (int i = n; i >= 1; i--)
        fac = fac * i;

    return fac;
}

int main()
{
    int number = 5;
    long result = factorial(number);

    printf("%d! = %ld\n", number, result);

    return 0;
}
