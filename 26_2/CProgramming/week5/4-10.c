#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Header file for date and time functions

int main()
{
    srand(time(NULL)); // Set the seed value using the current time
    printf("%d\n", rand()); // Print a random number

    return 0;
}
