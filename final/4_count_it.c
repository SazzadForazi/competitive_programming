#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int upper = 0, lower = 0, space = 0;
    char ch[1001];
    gets(ch);

    i = 0;
    while (ch[i] != 0)
    {

        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            upper++;
        }
        else if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            lower++;
        }
        else
        {
            space++;
        }
        i++;
    }
    printf("Capital - %d", upper);
    printf("\nSmall - %d", lower);

    printf("\nSpaces - %d", space);

    return 0;
}