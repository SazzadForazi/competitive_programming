// Has Return + No Parameter
#include <stdio.h>

int fun2()
{
    int n, i, fact = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int factorial = fun2();
    printf("%d", factorial);
    return 0;
}