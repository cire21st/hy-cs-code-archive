#include <stdio.h>

// A function with parameters and no return value
void function2(int x, int y)
{
    printf("This function has parameters but no return value.\n");
    printf("Two parameters: %d %d\n", x, y);
    printf("Return type: void\n");
}

int main()
{
    int a = 5, b = 7;
    function2(a, b);

    return 0;
}
