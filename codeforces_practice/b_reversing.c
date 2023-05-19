#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            int j = 0, k = i - 1;
            while (j < k)
            {
                int tmp = a[j];
                a[j] = a[k];
                a[k] = tmp;
                j++;
                k--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}