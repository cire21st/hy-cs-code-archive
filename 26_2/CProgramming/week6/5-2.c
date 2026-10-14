#include <stdio.h>

int main()
{
    int scores[5];

    scores[0] = 95;
    scores[1] = 85;
    scores[2] = 100;
    scores[3] = 77;
    scores[4] = 65;

    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, scores[i]);
    }

    return 0;
}
