#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int Ar[n];
    int cnt[1010] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Ar[i]);
        cnt[Ar[i]] = 1;
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (cnt[Ar[i] + 1])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}