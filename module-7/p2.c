#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int ar[n];

    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    long long int x;
    scanf("%lld", &x);
    for (long long int i = 0; i < n; i++)
    {
        // using linier search algorithm
        if (ar[i] == x)
        {
            printf("%lld", i);
            return 0;
        }
    }
    printf("-1");

    return 0;
}