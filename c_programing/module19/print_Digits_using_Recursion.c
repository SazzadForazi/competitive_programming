#include <stdio.h>
void digit_recursion(int i)
{
    if (i == 0)
        return;
    int x = i % 10;

    digit_recursion(i / 10);
    printf("%d ", x);
}
int main()
{

    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        digit_recursion(n);
        if (n == 0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}