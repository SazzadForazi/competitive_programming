#include <stdio.h>
int main()
{

    int n, evn = 0, odd = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            evn++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", evn, odd);
    return 0;
}