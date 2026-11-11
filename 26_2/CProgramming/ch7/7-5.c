#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main()
{
    int (*operations[3]) (int, int) = { add, subtract, multiply };

    int sum = operations[0](10, 5);
    int difference = operations[1](10, 5);
    int product = operations[2](10, 5);

    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", difference);
    printf("Multiplication: %d\n", product);

    return 0;
}
