#include <stdio.h>

int main()
{
    char c = 'p';
    float f = 2.15f;
    double d = 2.15;
    char *pc = &c;
    float *pf = &f;
    double *pd = &d;

    // print each variable's value through the pointer
    printf("value of c: %c\n", *pc);
    printf("value of f: %f\n", *pf);
    printf("value of d: %lf\n", *pd);

    // print each variable's memory address
    printf("address of c: %p\n", (void*)pc);
    printf("address of f: %p\n", (void*)pf);
    printf("address of d: %p\n", (void*)pd);

    return 0;
}
