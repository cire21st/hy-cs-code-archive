#pragma warning(disable: 4996)
#include <stdio.h>

void numPrinted(int numbers[], int readNum);

void numPrinted(int numbers[], int readNum) {
    for (int i = readNum - 1; i >= 0; i--) {
        printf("%3d", numbers[i]);
    }
}

int main()
{
    int readNum;
    int numbers[20];

    printf("Enter the number of integers: ");
    scanf("%d", &readNum);

    if (readNum > 20) readNum = 20;

    printf("\nInitialize the entered integers:\n");
    for (int i = 0; i < readNum; i++)
        scanf("%d", &numbers[i]);

    printf("\nPrinting the entered integers in reverse order: \n");
    numPrinted(numbers, readNum);

    return 0;
}
