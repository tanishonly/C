#include <stdio.h>
int main(void)
{
    int a = 2, b = 3;
    int *x = &a, *y = &b;
    printf("%p\n%p\n", x, y);
    printf("%p  x  %p  =  %d", x, y, a + b);
    return 0;
}