#include <stdio.h>

int main()
{
    int arr[] = { 1, 2, 3, 6, 3, 8, 2, 2, 8, 1, 2, 3, 5, 
                  0, 9, 8, 7, 6, 5, 8, 4, 5, 6 };

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Number of array elements: %d\n", arr_size);
    return 0;
}
