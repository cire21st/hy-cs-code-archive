#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++) { // Repeat from 0 to 9
        printf("Random number %d -> %d\n", i, rand());
    }

    return 0;
}
