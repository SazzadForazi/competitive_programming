#include <stdio.h>
int main()
{

    char a[100];
    gets(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] < 'z')
        {
            printf("%c", a[i] - 32);
        }
        if (a[i] >= 'A' && a[i] < 'Z')
        {
            printf("%c", a[i] + 32);
        }
    }
    printf("\n");
    return 0;
}