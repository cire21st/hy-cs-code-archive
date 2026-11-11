#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *arr;

    arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Array elements after calloc allocation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }

    printf("Array elements after assignment: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
