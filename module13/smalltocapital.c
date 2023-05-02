#include <stdio.h>
char small_to_capital(char a)
{
    char Cap = a - 32;
    return Cap;
}
int main()
{
    char c;
    scanf("%c", &c);
    char Capital = small_to_capital(c);
    printf("%c\n", Capital);
    return 0;
}