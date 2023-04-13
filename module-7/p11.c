#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n;
    long long int neg = 0, pos = 0, sum = 0;
    scanf("%d", &n);
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (long long int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            {
                pos += arr[i];
            }
        }
        else if (arr[i] < 0)
        {
            neg += arr[i];
        }
        sum = pos + neg;
    }

    printf("%lld\n", abs(sum));

    return 0;
}