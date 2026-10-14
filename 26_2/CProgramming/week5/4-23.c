#include <stdio.h>

// extern int internalVar; // This would cause a linker error

extern void printInternalVar();
extern void modifyInternalVar(int value);

int main() {
    printInternalVar(); // internalVar: 20
    modifyInternalVar(50);
    printInternalVar(); // internalVar: 50
    return 0;
}
