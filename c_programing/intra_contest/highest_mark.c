#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    int arr[101];

    scanf("%d", &n);
    int mini = INT_MIN;
    for (int i = 0; i < n; ++i)
    {

        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        if (mini < arr[i])
        {
            mini = arr[i];
        }
    }
    // int num = arr[0];
    for (int i = 0; i < n; i++)
    {

        printf("%d ", mini - arr[i]);
    }
    // printf("%d", mini);

    return 0;
}
