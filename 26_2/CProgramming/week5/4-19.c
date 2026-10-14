#include <stdio.h>

void increment() {
    static int count = 0; // Static variable retains its value between calls
    count++;
    printf("Static Count: %d\n", count);
}

int main()
{
    volatile int flag = 0; // Volatile variable

    flag = 1;

    while (!flag) {
        break; // Added to prevent an infinite loop not mentioned in original slide output
    }
    printf("Flag is now: %d\n", flag);

    increment();
    increment();
    increment();

    return 0;
}
