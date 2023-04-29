#include <stdio.h>
int main()
{

    int n, k = 4;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = k; j > 0; j--)
        {
            printf("* ");
        }
        k--;
        printf("\n");
    }

    return 0;
}