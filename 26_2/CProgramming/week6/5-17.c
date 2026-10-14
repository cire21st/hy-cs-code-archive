#include <stdio.h>
#include <stdlib.h>

#define FLOOR 3
#define ROW 4
#define COL 5

int main()
{
    int array[FLOOR][ROW][COL];
    int a, b, c;

    for (a = 0; a < FLOOR; a++) {
        for (b = 0; b < ROW; b++) {
            for (c = 0; c < COL; c++) {
                array[a][b][c] = rand() % 100; // Generate a readable random number
            }
        }
    }

    for (a = 0; a < FLOOR; a++) {
        for (b = 0; b < ROW; b++) {
            for (c = 0; c < COL; c++) {
                printf("array[%d][%d][%d] = %d\t", a, b, c, array[a][b][c]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
