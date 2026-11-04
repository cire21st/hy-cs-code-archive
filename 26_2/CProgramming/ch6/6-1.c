#include <stdio.h>

int main()
{
    char x = 'h';
    int y = 100;
    float z = 2.5f;

    printf("Memory address of x: %p\n", &x);
    printf("Memory address of y: %p\n", &y);
    printf("Memory address of z: %p\n", &z);

    return 0;
}
