#include <stdio.h>
int main()
{

    int n, i, j;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * (n - i) - 2; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%d ", i + 1);
        }
        printf("\n");
    }
    return 0;
}