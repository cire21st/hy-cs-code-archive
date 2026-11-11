#pragma warning (disable: 4996)
#include <stdio.h>

int main()
{
    int a, *p, **q, ***r;

    p = &a;
    q = &p;
    r = &q;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The entered number is: %d\n", a);

    printf("\nEnter a number: ");
    scanf("%d", p);
    printf("The entered number is: %d\n", a);

    printf("\nEnter a number: ");
    scanf("%d", *q);
    printf("The entered number is: %d\n", a);

    printf("\nEnter a number: ");
    scanf("%d", **r);
    printf("The entered number is: %d\n", a);

    printf("Address of a (&a): %p\n", &a);
    printf("Value of p (address of a): %p\n", p);
    printf("Value of q (address of p): %p\n", q);
    printf("Value of r (address of q): %p\n", r);

    printf("Value of a directly: %d\n", a);
    printf("Value via *p: %d\n", *p);
    printf("Value via **q: %d\n", **q);
    printf("Value via ***r: %d\n", ***r);

    *p = 200;
    printf("\nAfter *p=200, a = %d\n", a);
    **q = 300;
    printf("After **q=300, a = %d\n", a);
    ***r = 400;
    printf("After ***r=400, a = %d\n", a);

    return 0;
}
