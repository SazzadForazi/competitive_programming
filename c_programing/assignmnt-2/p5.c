#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int index, value;
    scanf("%d%d", &index, &value);
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == index)
        {
            arr[i] = value;
        }

        printf("%d ", arr[i]);
    }

    return 0;
}