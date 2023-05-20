#include <stdio.h>
#include <limits.h>
void max_min(int n)
{
    int a[1001];
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < mn)
        {
            mn = a[i];
        }
        if (a[i] > mx)
        {
            mx = a[i];
        }
    }
    printf("%d %d", mn, mx);
}

int main()
{
    int m;
    scanf("%d", &m);
    max_min(m);

    return 0;
}