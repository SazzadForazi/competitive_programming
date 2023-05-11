#include <stdio.h>
int main()
{
    int n, temp, i, j;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (temp < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }

    if (n % 2 == 1)
    {
        printf("%d", a[n / 2]);
    }
    else
    {
        if (n % 2 == 0)
        {
            printf("%d %d", a[(n - 1) / 2], a[((n - 1) / 2) + 1]);
        }
    }

    return 0;
}