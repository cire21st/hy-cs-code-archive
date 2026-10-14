#include <stdio.h>

int array_list(int*, int);

int main()
{
    int scores[10] = { 95, 83, 75, 98, 65, 77, 90, 91 };
    int array_size, total;

    array_size = sizeof(scores) / sizeof(int);
    total = array_list(scores, array_size);

    printf("Number of elements in scores array: %d\n", array_size);
    printf("Total sum of scores: %d\n", total);

    return 0;
}

int array_list(int scores[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
        sum += scores[i];
    return sum;
}
