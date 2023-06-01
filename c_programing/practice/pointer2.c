#include <stdio.h>

// void increment(int x)
// {

//     x = x + 1;
//     printf("Inside function: %d\n", x);
// }
// int main()
// {

//     int x = 5;
//     printf("Before function call: %d\n", x);
//     increment(x);
//     printf("After function call: %d\n", x);

void increment(int *x)
{

    *x = *x + 1;
    printf("Inside function: %d\n", *x);
}
int main()
{

    int x = 5;
    printf("Before function call: %d\n", x);
    increment(&x);
    printf("After function call: %d\n", x);

    return 0;
}