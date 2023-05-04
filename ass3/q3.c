#include <stdio.h>

int count_before_zero(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            return count;
        }
        count++;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int count = count_before_zero(arr, n);
    printf("%d\n", count);
    return 0;
}
