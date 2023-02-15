#include <stdio.h>

int main ( void )
{
    int n = 0;
    n = 1 | 2;
    printf("1) %d\n", n);
    n = 0;
    (n = 1) || (n = 2);
    printf("2) %d\n", n);
    return 0;
}