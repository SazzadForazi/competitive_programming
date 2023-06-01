#include <stdio.h>
long long int fact(long long int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long int factis = fact(n - 1);
    return factis * n;
}
int main()
{

    long long int n;
    scanf("%lld", &n);
    long long int ans = fact(n);
    printf("%lld\n", ans);

    return 0;
}