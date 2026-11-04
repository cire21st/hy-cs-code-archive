#include <stdio.h>

int main(void)
{
    char str[6] = "hello";
    char* pstr;

    pstr = str;

    printf("str: %s\n", str);
    printf("*pstr = %c\n", *pstr);
    printf("pstr = %s\n", pstr);

    return 0;
}
