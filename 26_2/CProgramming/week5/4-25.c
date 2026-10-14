#include <stdio.h>

int sharedVar = 10; // Definition of external linkage variable

void displaySharedVar(void) { // Definition of external linkage function
    sharedVar += 5;
    printf("Shared external variable: %d\n", sharedVar);
}
