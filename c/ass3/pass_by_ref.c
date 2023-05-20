#include <stdio.h>
void fun(int *num_ptr)
{
    (*num_ptr)++;
    printf("Inside function: %d\n", *num_ptr);
}

int main()
{
    int x = 5;
    fun(&x);
    printf("Outside function: %d\n", x);
    return 0;
}
