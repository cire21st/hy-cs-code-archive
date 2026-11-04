#include <stdio.h>

int main()
{
    int a[5] = {2, 4, 6, 8, 22}; // initialize array
    int* ptr = a; // use array name a as a pointer

    // access each element using pointer
    for (int i = 0; i < 5; i++) {
        printf("*(ptr+%d) = %d\n", i, *(ptr+i));
    }

    return 0;
}
