#include <stdio.h>
int main()
{

    int row;
    scanf("%d", &row);
    int a[row][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;
    if (row != row)
    {
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    flag = 0;
                }
            }
            else if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}