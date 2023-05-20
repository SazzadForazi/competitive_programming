#include <stdio.h>
int main()
{
    int size, i = 0, j = 0;
    scanf("%d", &size);
    while (size % 2 == 0)
    {

        scanf("%d", &size);
    }

    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            if (j == i && i != size / 2 && j != size / 2)
            {
                printf("\\");
            }
            else if (i == size / 2 && j == size / 2)
            {
                printf("X");
            }

            else if (i == (size - 1) - j)
            {

                printf("/");
            }

            else
            {
                printf("*");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}