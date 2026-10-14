#include <stdio.h>

void show() {
    auto int num = 5; // Equivalent to 'int num = 5;'
    printf("Auto Num: %d\n", num);
}

int main()
{
    show();

    register int i;
    for (i = 0; i < 1000000; i++) {
    }
    printf("i = %d \n", i);
    return 0;
}
