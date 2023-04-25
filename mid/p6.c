#include <stdio.h>
int main()
{

    int n, m;
    int cnt = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == m)
        {
            cnt++;
        }
    }
    printf("%d\n", cnt);

    return 0;
}