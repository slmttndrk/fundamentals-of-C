#include <stdio.h>

int main()
{
    const int a = 10;
    const int * ptr = &a;
    *ptr = 50;    // This is not allowed because 'a' is const
    printf("%d", *ptr);
    return 0;
}
