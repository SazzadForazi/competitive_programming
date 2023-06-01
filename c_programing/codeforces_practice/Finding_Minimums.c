#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    int Ar[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Ar[i]);
    }

    for (int i = 0; i < N; i++)
    {
        int mini = INT_MAX;
        int j;
        for (j = i; j < (i + K) && j < N; j++)
        {
            if (Ar[j] < mini)
            {
                mini = Ar[j];
            }
        }
        printf("%d ", mini);
        i = j - 1;
    }

    return 0;
}