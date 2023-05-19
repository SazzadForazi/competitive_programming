#include <stdio.h>
#include <limits.h>
int main()
{

    int a, k;
    scanf("%d %d", &a, &k);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j = k - 1;
    int mn = INT_MAX;
    for (int i = 0; i < a; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
        if (i == j)
        {
            printf("%d ", mn);
            j += k;
            mn = INT_MAX;
        }
    }

    if (a % k != 0)
    {
        printf("%d ", mn);
    }

    return 0;
}