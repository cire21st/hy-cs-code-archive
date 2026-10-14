#include <stdio.h>

int main()
{
    int table[4][4];
    int num = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            table[i][j] = num;
            num++;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
