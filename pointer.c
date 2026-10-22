#include <stdio.h>
int main(void)
{
    int a = 20;
    printf("value of variable a is %d\n", a);
    int *ptr = &a;
    printf("address of a is %p\n", ptr);
    return 0;
}