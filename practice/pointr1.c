#include <stdio.h>
int main()
{

    int a = 5, *ptr;
    ptr = &a;
    printf("Direct access: %d\n", a);
    printf("Indirect access: %d\n", *ptr);

    return 0;
}