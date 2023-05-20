#include <stdio.h>
int main()
{

    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        long long int n, a, b, c;
        scanf("%lld%lld%lld%lld", &n, &a, &b, &c);
        long long int result = n - (a + b + c);
        printf("%lld\n", result);
    }

    return 0;
}