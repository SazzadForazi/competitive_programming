#include <stdio.h>
char capital_to_small(char a)
{
    char Cap = a + 32;
    return Cap;
}
int main()
{
    char c;
    scanf("%c", &c);
    char Capital = capital_to_small(c);
    printf("%c\n", Capital);
    return 0;
}