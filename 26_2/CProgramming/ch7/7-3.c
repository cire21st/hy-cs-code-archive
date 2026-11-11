#include <stdio.h>

int main()
{
    char *strings[3] = {
        "Hello World!",
        "How are you?",
        "C language Programming."
    };

    for (int i = 0; i < 3; i++) {
        printf("%s\n", strings[i]);
    }
    return 0;
}
