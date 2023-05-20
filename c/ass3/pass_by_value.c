#include <stdio.h>
void fun(int num)
{
    num++;
    printf("Inside function: %d\n", num);
}

int main()
{
    int x = 5;
    fun(x);
    printf("Outside function: %d\n", x);
    return 0;
}
