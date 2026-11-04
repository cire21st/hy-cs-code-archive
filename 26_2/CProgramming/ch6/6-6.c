#include <stdio.h>

int main()
{
    int num = 50; // initialize integer variable num with 50
    int* pnum;    // declare integer pointer variable pnum

    pnum = &num;  // initialize pnum with the address of num

    printf("*(pnum) = %d \n", *(pnum));
    printf("*(pnum++) = %d \n", *(pnum++));
    printf("*(++pnum) = %d \n", *(++pnum));

    printf("pnum = %p \n", pnum);
    printf("pnum++ = %p \n", pnum++);
    printf("++pnum = %p \n", ++pnum);

    return 0;
}
