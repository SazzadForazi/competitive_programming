#include <stdio.h>
#include <math.h>
int main()
{

    long long int a, b, x, y;
    scanf("%lld%lld", &a, &b);
    x = b * ceil(log(a));
    y = a * ceil(log(b));
    if (x > y)
    {

        printf(">\n");
    }
    else if (x < y)
    {
        printf("<\n");
    }
    else if (x == y)
    {
        printf("=\n");
    }

    return 0;
}