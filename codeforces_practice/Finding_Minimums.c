#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / m; j++)
        {
            printf("%d ", a[n]);
        }
    }

    return 0;
}