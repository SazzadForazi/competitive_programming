#include <stdio.h>
char small_to_capital(char a)
{
    char cap;
    cap = a - 32;
    return cap;
}

char capital_to_small(char a)
{
    char sm;
    sm = a + 32;
    return sm;
}
int main()
{
    char c, Capital;
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
    {
        Capital = small_to_capital(c);
    }
    else
    {
        Capital = ' ';
    }
    printf("%c\n", Capital);
    return 0;
}