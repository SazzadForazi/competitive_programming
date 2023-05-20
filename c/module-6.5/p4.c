#include <stdio.h>
int main()
{

    int a, b, d;
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        printf("%d", a - b);
    }
    else
    {
        printf("0");
    }

    return 0;
}