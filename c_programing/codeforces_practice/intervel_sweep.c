#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a, b;
    scanf("%d%d", &a, &b);
    int l = abs(a - b);

    if (a == 0 && b == 0)
    {
        printf("NO\n");
    }
    else if (l == 0 || l == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}