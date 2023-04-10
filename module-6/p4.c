#include <stdio.h>
int main()
{

    int n, m;
    int b, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        if (m > max)
        {
            max = m;
        }
    }
    printf("%d\n", max);

    return 0;
}