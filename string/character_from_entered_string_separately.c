#include <stdio.h>
int main()
{

    char a[100];
    gets(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'A' || a[i] == 'a' || a[i] == 'E' || a[i] == 'e' || a[i] == 'I' || a[i] == 'i' || a[i] == 'O' || a[i] == 'o' || a[i] == 'U' || a[i] == 'u')
            printf("%c", a[i]);
    }
    printf("\n");
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (!(a[i] == 'A' || a[i] == 'a' || a[i] == 'E' || a[i] == 'e' || a[i] == 'I' || a[i] == 'i' || a[i] == 'O' || a[i] == 'o' || a[i] == 'U' || a[i] == 'u'))
            printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}