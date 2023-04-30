#include <stdio.h>
int main()
{

    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = s; j > 0; j--)
        {
            printf(" ");
        }
        s--;
        for (int j = 0; j < k; j++)
        {
            printf("* ");
        }
        k++;

        printf("\n");
    }

    return 0;
}