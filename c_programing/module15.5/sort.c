#include <stdio.h>
#include <limits.h>
void fun(int a, int b, int c)
{
    int max, min, mid;
    if (a >= b && a >= c)
    {
        max = a;
        if (b >= c)
        {
            mid = b;
            min = c;
        }
        else
        {
            mid = c;
            min = b;
        }
    }
    if (b >= a && b >= c)
    {
        max = b;
        if (a >= c)
        {
            mid = a;
            min = c;
        }
        else
        {
            mid = c;
            min = a;
        }
    }
    if (c >= a && c >= b)
    {
        max = c;
        if (a >= b)
        {
            mid = a;
            min = b;
        }
        else
        {
            mid = b;
            min = a;
        }
    }
    printf("%d\n%d\n%d\n", min, mid, max);

    printf("\n%d\n%d\n%d\n", a, b, c);
}
int main()
{
    int m, n, k;
    scanf("%d%d%d", &m, &n, &k);
    fun(m, n, k);

    return 0;
}