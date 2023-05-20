#include <stdio.h>
int main()
{

    char c, d;
    scanf("%c", &c);

    if (c >= 'a' && c <= 'y')
    {
        d = c + 1;
        printf("%c", d);
    }
    else if (c == 'z')
    {
        d = c + 1;
        printf("a");
    }
    return 0;
}