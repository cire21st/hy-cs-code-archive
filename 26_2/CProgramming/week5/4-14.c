#include <stdio.h>

int main()
{
    int mainVar = 5; // Local variable of main() function

    printf("Initial mainVar in main function = %d\n", mainVar);
    {
        int blockVar = 10; // Local variable of nested block
        printf("Inside block, blockVar = %d\n", blockVar);
        mainVar = 20; // Changing the value of main() function's local variable
        printf("Inside block, modified mainVar = %d\n", mainVar);
    }

    printf("Outside block, mainVar = %d\n", mainVar);

    return 0;
}
