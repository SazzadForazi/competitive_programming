#include <stdio.h>
int main()
{

    char str[1001];
    scanf("%s", &str);
    int c = 0, s = 0;
    int i = 0;
    while (str[i] != 0)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            c++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            s++;
        }
        i++;
    }

    printf("%d %d", s, c);

    return 0;
}