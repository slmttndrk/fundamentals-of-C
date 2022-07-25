#include <stdio.h>

int main()
{
    printf("Hello world!\n");
    char string1[10] = {'s','c','a','l','e','r','\0'};
    char string2[10] = "scaler";
    char string3 [] = "scaler";
    printf("%s\n", string1);
    printf("%s\n", string2);
    printf("%s\n", string3);
    return 0;
}