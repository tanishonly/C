#include <stdio.h>
int factorial(int);
int main(void)
{
    int n, ans;
    printf("enter the value of n:");
    scanf("%d", &n);
    ans = factorial(n);
    printf("%d\n", ans);
    return 0;
}
int factorial(int n)
{
    int f;
    if (n == 0)
        return 1;
    else
    {
        f = n * factorial(n - 1);
    }
    return f;
}