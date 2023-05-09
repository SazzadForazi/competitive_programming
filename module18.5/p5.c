#include <stdio.h>
long long summation(int a[], int n, int i)
{
    if (i == n)
    {
        return 0;
    }
    long long int sumis = a[i] + summation(a, n, i + 1);
    return sumis;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long total = summation(a, n, 0);
    printf("%lld\n", total);
    return 0;
}