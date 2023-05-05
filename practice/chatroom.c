#include <stdio.h>
#include <string.h>
int main()
{

    char s[100];
    scanf("%s", &s);
    char a[] = "hello";
    int x = 0, y = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == a[x])
        {
            x++;
            y++;
        }
    }
    if (y == 5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}