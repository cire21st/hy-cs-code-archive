#include <stdio.h>

int main()
{
    int i = 10;
    double d = 3.4;
    int* pi;
    double* pd;

    printf("Bytes allocated to variable pi: %d (byte)\n", sizeof(pi));
    printf("Bytes allocated to variable pd: %d (byte)\n", sizeof(pd));

    return 0;
}
