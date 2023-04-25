#include <stdio.h>
int main()
{

    int m1, m2, d, op;

    scanf("%d%d%d", &m1, &m2, &d);
    op = (d * m1) / m2;
    printf("%d\n", op);

    return 0;
}