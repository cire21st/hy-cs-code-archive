#include <stdio.h>

int main()
{
    int value = 125;
    int *ptr;
    ptr = &value; // ptr points to the address of value

    printf("value's value: %d\n", value);
    printf("value's address: %p\n", &value);
    printf("address pointed to by ptr: %p\n", ptr);
    printf("value at the address pointed to by ptr: %d\n", *ptr);

    return 0;
}
