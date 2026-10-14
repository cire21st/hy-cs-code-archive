#include <stdio.h>

void modifyMainVar(int mainVar) {
    int blockVar = 10; // Local variable of the nested block
    printf("Inside block, blockVar = %d\n", blockVar);
    mainVar = 20; // Changing the value of main() function's local variable
    printf("Inside block, modified mainVar = %d\n", mainVar);
}

int main() {
    int mainVar = 5; // Local variable of the main function
    printf("Initial mainVar in main function = %d\n", mainVar);
    modifyMainVar(mainVar); // Changing mainVar value via function call
    printf("Outside block, mainVar = %d\n", mainVar);
    return 0;
}
