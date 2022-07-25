
#include <stdio.h>

int main()
{
    // declaring maximum size of string
    int size = 50;

    // declaring the string 
    char new_string[size];

    // using gets function to take input
    fgets(new_string,size,stdin);

    // using printf method to send output:
    printf("output 1: %s\n",new_string);

    // using gets function to take input
    scanf("%[^\n]%*c",new_string);

    // using printf method to send output:
    printf("output 2: %s\n\n",new_string);

    // using gets function to take input 
    scanf("%s",new_string);

    // using printf method to send output:
    printf("output 3: %s\n",new_string);

    return 0;
}
