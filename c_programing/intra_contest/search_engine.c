#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        int flag = 0;
        int s, y;
        int ans;
        scanf("%d", &s);

        for (int j = 1; j <= n; j++)
        {

            if (a[j] == s)
            {

                y = j;
                printf("Case %d: %d\n", k, y);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("Case %d: Not Found\n", k);
            // flag = 1;
        }
        flag = 0;
    }
    return 0;
}