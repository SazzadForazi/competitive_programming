#include <stdio.h>
int main()
{

    int n, m;
    int even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        // printf("%d ", m);
        if (m % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (m > 0)
        {
            pos++;
        }
        else if (m < 0)
        {
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);
    return 0;
}