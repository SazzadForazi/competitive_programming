#include <stdio.h>
#include <string.h>
int main()
{
    int n, len;
    char a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &a);
        len = strlen(a);
        if (len > 10)
        {
            printf("%c%d%c\n", a[0], len - 2, a[len - 1]);
        }
        else
        {
            printf("%s\n", a);
        }
    }

    return 0;
}