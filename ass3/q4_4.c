
// No Return + No Parameter
#include <stdio.h>
void fun4()
{
    int n;
    scanf("%d", &n);
    int j, sum = 0;
    for (j = 1; j <= n; j++)
    {
        sum = sum + j;
    }
    printf("\nThe Sum is : %d\n", sum);
}

int main()
{
    fun4();

    return 0;
}