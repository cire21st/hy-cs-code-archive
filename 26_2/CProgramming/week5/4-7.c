#include <stdio.h>

// A function with two parameters and a return value
int function4(int x, int y)
{
    printf("Two parameters: %d %d\n", x, y);
    printf("Return value: %d\n", x + y);

    return x + y;
}

int main()
{
    int a = 10, b = 6;
    int result4 = function4(a, b);
    printf("Return value from function4: %d\n", result4);
    return 0;
}
