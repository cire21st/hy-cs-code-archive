#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
    int i, j, array[3][4];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Enter an integer >> ");
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            printf("%d\t", array[i][j]);
        printf("\n");
    }
    printf("\n");

    return 0;
}
