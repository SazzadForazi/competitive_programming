// Has Return + Parameter

#include <stdio.h>
int fun1(int m, int n)
{
    return m + n;
}
int main()
{

    int a, b;
    scanf("%d%d", &a, &b);
    int sumis = fun1(a, b);
    printf("%d", sumis);

    return 0;
}