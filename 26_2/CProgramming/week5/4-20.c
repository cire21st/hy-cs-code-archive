#include <stdio.h>
#include <stdarg.h> // Header file for using variable arguments

int sum(int num, ...) {
    va_list args;
    int total = 0;

    va_start(args, num); // Initialize args to retrieve arguments after 'num'
    for (int i = 0; i < num; i++)
    {
        total += va_arg(args, int); // Retrieve the next int argument
    }

    va_end(args); // Clean up the variable argument list

    return total;
}

int main() {
    printf("Arguments 3, 2+3+4 = %d\n", sum(3, 2, 3, 4));
    printf("Arguments 2, 5+6 = %d\n", sum(2, 5, 6));
    printf("Arguments 10, 1+2+3+4+5+6+7+8+9+10 = %d\n", sum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));

    return 0;
}
