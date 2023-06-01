#include <stdio.h>

char char_to_ascii(char a)
{
    return a;
}
int main()
{
    char ch, ascii_is;
    scanf("%c", &ch);
    ascii_is = char_to_ascii(ch);
    printf("%d", ascii_is);
    return 0;
}