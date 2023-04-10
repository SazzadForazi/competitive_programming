#include <stdio.h>
int main()
{
    int ascii;
    char ch;
    scanf("%c", &ch);
    ascii = ch - 32;
    if (ascii >= 65 && ascii <= 90)
    {

        printf("%c", ascii);
    }
    else
    {
        ascii = ch + 32;

        if (ascii >= 97 && ascii <= 122)
        {

            printf("%c", ascii);
        }
    }

    return 0;
}