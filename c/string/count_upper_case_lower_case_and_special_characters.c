#include <stdio.h>
int main()
{
    int countL, countU, countS;
    char a[100];
    gets(a);
    countL = countU = countS = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
        {
            if ((a[i] >= 'A' && a[i] <= 'Z'))
            {
                // it is upper case alphabet
                countU++;
            }
            else
            {
                // it is lower case character
                countL++;
            }
        }
        else
        {
            countS++;
        }
    }
    printf("lower:%d\nupper:%d\nspecial:%d\n", countL, countU, countS);
    return 0;
}