#include <stdio.h>
int main(void)
{
    int a, b, c, r;
    printf("entr the value of a , b , c\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    r = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("the greatest number from a , b , c is %d\n", r);
    return 0;
}