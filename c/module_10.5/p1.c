#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    int min = a[0];
    int max = a[0];
    int minIndex;
    int maxIndex;
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            minIndex = i;
        }
        if (max < a[i])
        {
            max = a[i];
            maxIndex = i;
        }
    }
    a[minIndex] = max;
    a[maxIndex] = min;

    for (int i = 0; i < n; i++)
    {
        printf("%lld ", a[i]);
    }

    return 0;
}