#include <stdio.h>

int findMax(int numbers[], int size) {
    int max = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

int main()
{
    int numbers[10] = { 10, 52, 23, 74, 15, 67, 38, 29, 40, 51 };
    int max_value = findMax(numbers, 10);

    printf("The maximum value in the array is %d.\n", max_value);

    return 0;
}
