#include <stdio.h>

int main()
{
    int a[5] = {2, 4, 6, 8, 22};
    int *p = a;
    int i = 0;

    printf("a[i]: %d \n", a[i]);
    printf("p: %d \n", *p); // slide format matches the value of *p

    return 0;
}
