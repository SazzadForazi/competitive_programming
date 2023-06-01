
// No Return + Parameter
#include <stdio.h>
void fun3(int m)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", m, i, m * i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    fun3(n);

    return 0;
}