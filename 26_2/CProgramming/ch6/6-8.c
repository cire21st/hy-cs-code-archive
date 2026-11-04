#include <stdio.h>

int main()
{
    int m_int = 10;
    float m_float = 3.14f;
    double m_double = 6.28;
    char m_char = 'A';
    void* mp;

    mp = &m_int; // &m_int returns an int type address
    printf("Address of m_int: %p, Value: %d\n", mp, *(int*)mp);

    mp = &m_float; // &m_float returns a float* type address
    printf("Address of m_float: %p, Value: %f\n", mp, *(float*)mp);

    mp = &m_double; // &m_double returns a double* type address
    printf("Address of m_double: %p, Value: %lf\n", mp, *(double*)mp);

    mp = &m_char; // &m_char returns a char* type address
    printf("Address of m_char: %p, Value: %c\n", mp, *(char*)mp);

    return 0;
}
