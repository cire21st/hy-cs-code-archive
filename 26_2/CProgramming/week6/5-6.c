#include <stdio.h>

void print_square(int x);

int main()
{
    int i;
    int base[5] = { 31, 71, 21, 41, 51 };

    for (i = 0; i < 5; i++)
        print_square(base[i]);

    return 0;
}

void print_square(int x)
{
    printf("%d ", x * x);
}
