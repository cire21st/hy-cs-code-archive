#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    srand(time(NULL)); // Set the seed value using the current time
    for (i = 0; i < 9; i++) {
        printf("Random number with seed %d %d\n", i, 1 + rand() % 100);
    }

    return 0;
}
