#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[30];
    scanf("%s", str);
    int result = is_palindrome(str);
    if (result)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
