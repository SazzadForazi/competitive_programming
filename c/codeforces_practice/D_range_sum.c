#include <stdio.h>

int main()
{

    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        long long int l, r;
        scanf("%lld %lld", &l, &r);
        if (l > r)
        {
            long long int tmp = r;
            r = l;
            l = tmp;
        }
        long long int res = (r * (r + 1)) / 2 - ((l - 1) * (l - 1 + 1)) / 2;
        printf("%lld\n", res);
    }
    return 0;
}