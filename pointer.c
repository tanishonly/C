#include <stdio.h>
int main(void)
{
    int a = 20;
    printf("pointer of variable a is %p\n", &a);
    int *ptr = &a;
    printf("address of a is %p\n", ptr);
    return 0;
}