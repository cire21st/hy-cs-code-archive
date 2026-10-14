#include <stdio.h>

int main()
{
    char str[5];

    str[0] = 'H';
    str[1] = 'E';
    str[2] = 'L';
    str[3] = 'L';
    str[4] = 'O';

    for (int i = 4; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
