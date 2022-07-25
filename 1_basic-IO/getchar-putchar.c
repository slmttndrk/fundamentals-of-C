#include <stdio.h>
  
int main()
{
    char Character = 'A';
    for(char i=Character;i<='Z';i++){
      putchar(i);  
    }
    
    putchar('\n');

    char c;   
    printf ("write a char: ");  
    c = getchar();

    printf("value of char which we take as input: ");  
    putchar(c);

    putchar('\n');

    return (0);
}
