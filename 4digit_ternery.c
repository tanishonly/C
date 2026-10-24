#include <stdio.h>
int main(void)
{
    int a, b, c, d, r;
    printf("enter the values: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    r = (a > b) ? ((a > c) ? ((a > d) ? a : d) : ((c > d) ? c : d)) : ((b > c) ? ((b > d) ? b : d) : ((c > d) ? c : d));
    printf("%d", r);
    return 0;
}