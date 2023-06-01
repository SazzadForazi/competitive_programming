#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        if (i <= rows)
        {
            for (j = 1; j <= rows / 2; j++)
            {
                printf("*");
            }
            printf("#");
            for (j = 1; j <= rows / 2; j++)
            {
                printf("*");
            }
        }
        // else
        // {

        //     printf("*");
        // }
        printf("\n");
    }

    return 0;
}
