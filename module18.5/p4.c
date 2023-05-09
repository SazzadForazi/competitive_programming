#include <stdio.h>
void fun(int a[], int n, int i)
{
    if (i == n)
        return;
    fun(a, n, i + 1);
    if (i % 2 == 0)
    {
        printf("%d ", a[i]);
    }
}
int main()
{

    int m;
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    fun(a, m, 0);

    return 0;
}