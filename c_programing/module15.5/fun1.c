#include <stdio.h>

int fun(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    int sumis = fun(x, y);
    printf("%d\n", sumis);

    return 0;
}