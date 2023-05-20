#include <stdio.h>
#include <string.h>
int main()
{

    char s[100001];
    scanf("%s", &s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ',')
        {
            printf(" ");
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            int as = s[i] - 32;
            char res = as;
            printf("%c", res);
        }
        else
        {
            int as = s[i] + 32;
            char res = as;
            printf("%c", res);
        }
    }
    return 0;
}