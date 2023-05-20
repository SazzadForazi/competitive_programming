#include <stdio.h>
#include <string.h>
int main()
{

    char str[1001];
    scanf("%s", &str);
    int cnt = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            cnt++;
        }
        i++;
    }
    printf("%d\n", cnt);
    return 0;
}