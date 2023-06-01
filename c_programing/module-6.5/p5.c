#include <stdio.h>
int main()
{

    int n, m, d;
    scanf("%d", &n);
    m = n % 10;
    d = n / 10;

    // printf("%d  %d", d, m);
    if ((m % d) == 0 || (d % m) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}