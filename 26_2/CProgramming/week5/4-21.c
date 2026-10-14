#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1; // Return 1 if n is less than or equal to 1
    }
    else {
        return n * factorial(n - 1); // Recursive call to factorial(n-1)
    }
}

int main() {
    int number = 7;
    printf("%d! = %d\n", number, factorial(number));
    return 0;
}
