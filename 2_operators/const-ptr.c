#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int * const ptr = &a;
    ptr = &b;    // Cannot point to another variable now
    printf("%d", *ptr);
    return 0;
}
