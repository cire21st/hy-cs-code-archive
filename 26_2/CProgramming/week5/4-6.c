#include <stdio.h>

// A function with no parameters but with a return value
int function3()
{
    printf("This function has no parameters but returns a value. \n");
    printf("Parameters: None\n");
    printf("Return value: 42\n");
    return 42;
}

int main()
{
    int result3 = function3();
    printf("Return value from function3: %d\n", result3);
    return 0;
}
