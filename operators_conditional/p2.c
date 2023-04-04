#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 10000)
    {
        printf("Gucci Bag\n");
        if (n > 20000)
        {
            printf("Gucci Belt");
        }
    }
    else if (n >= 5000)
    {
        printf("levis bag");
    }
    else
        printf("somethings");
    return 0;
}
