#include <stdio.h>

int main()
{
    int *m_int = NULL;
    float *m_float = NULL;
    double *m_double = NULL;
    char *m_char = NULL;

    void *mp;

    mp = m_int; // m_int is an int* type pointer variable
    printf("mp points to m_int: %p\n", mp);

    mp = m_float; // m_float is a float* type pointer variable
    printf("mp points to m_float: %p\n", mp);

    mp = m_double; // m_double is a double* type pointer variable
    printf("mp points to m_double: %p\n", mp);

    mp = m_char; // m_char is a char* type pointer variable
    printf("mp points to m_char: %p\n", mp);

    return 0;
}
