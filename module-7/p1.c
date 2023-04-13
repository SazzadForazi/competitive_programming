#include <stdio.h>
#include <stdlib.h>
int main()
{

    long long int n;
    long long int sum = 0, pos = 0, neg = 0;
    scanf("%lld", &n);

    for (long long int i = 0; i < n; i++)
    {
        long long int m;
        scanf("%lld", &m);

        if (m >= 0)

        {
            pos += m;
        }
        else if (m < 0)
        {
            neg += m;
        }
        sum = pos + neg;
    }
    long long int ab;
    ab = abs(sum);
    printf("%lld\n", ab);

    return 0;
}