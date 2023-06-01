#include <stdio.h>
int main()
{
    int n, i;
    int sum = 21;
    scanf("%d", &n);

    for (i = 21; i <= n; i += 21)
    {
        printf("%d\n", i);
    }

    return 0;
}