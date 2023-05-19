#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    int i = 0, j = a - 1;
    while (i <= j)
    {
        if (i == j)
        {
            printf("%d ", arr[i]);
        }
        else
        {
            printf("%d %d ", arr[i], arr[j]);
        }
        i++;
        j--;
    }

    return 0;
}