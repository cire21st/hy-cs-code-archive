#include <stdio.h>

int main()
{
    int numbers[5];
    numbers[0] = 11;
    numbers[1] = 22;
    numbers[2] = 33;
    numbers[3] = 44;
    numbers[4] = 55;

    printf("Element 0: %d\n", numbers[0]);
    printf("Element 1: %d\n", numbers[1]);
    printf("Element 2: %d\n", numbers[2]);
    printf("Element 3: %d\n", numbers[3]);
    printf("Last element: %d\n", numbers[4]);

    return 0;
}
