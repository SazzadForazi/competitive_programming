#include <stdio.h>
#include <string.h>
int main()
{
    char a[21], b[21];
    scanf("%s%s", a, b);
    int val = strcmp(a, b);
    if (val <= 0)
    {
        printf("%s\n", a);
    }
    else if (val >= 0)
    {
        printf("%s\n", b);
    }

    return 0;
}