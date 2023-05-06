#include <stdio.h>
int main()
{

    char a[100];
    // scanf("%s", &a);
    gets(a);
    // printf("%s", a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}