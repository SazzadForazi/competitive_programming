#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", &s);
    int cnt[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        cnt[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        char ch = i + 'a';
        printf("%c - %d\n", ch, cnt[i]);
    }
    return 0;
}