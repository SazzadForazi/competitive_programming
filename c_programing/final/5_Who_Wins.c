#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int tig = 0, pat = 0;
    for (int i = 0; i < n; i++)
    {
        long long int x, y;
        scanf("%lld%lld", &x, &y);
        if (x > y)
        {
            tig++;
        }
        if (y > x)
        {
            pat++;
        }
    }

    // printf("%d %d", tig, pat);
    if (tig > pat)
    {
        printf("Tiger\n");
    }
    else if (tig < pat)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }
    return 0;
}