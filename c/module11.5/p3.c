#include <stdio.h>
#include <string.h>
int main()
{

    char str[101];
    scanf("%s", &str);
    int cnt[26] = {0};
    // printf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        int val = str[i] - 97;
        // printf("%d ", val);
        cnt[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            char ch = i + 'a';
            printf("%c : %d\n", ch, cnt[i]);
        }
    }

    return 0;
}