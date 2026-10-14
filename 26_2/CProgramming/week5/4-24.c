#include <stdio.h>

extern int sharedVar; // Declaration of external linkage variable
void displaySharedVar(void); // Declaration of external linkage function

int main()
{
    printf("Local access to sharedVar: %d\n", sharedVar);
    displaySharedVar();
    return 0;
}
