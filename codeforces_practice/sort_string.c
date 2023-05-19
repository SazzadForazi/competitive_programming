#include <stdio.h>
#include <string.h>
int main()
{
    int val;
    char a[27];
    scanf("%s", &a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        char ch = a[i];
        int val = ch;
        int k = a[val - 97]++;
        printf("%d ", val);
    }

    // for (int i = 0; i <= 26; i++)
    // {
    //     printf("%d", a[val]);
    // }
    return 0;
}