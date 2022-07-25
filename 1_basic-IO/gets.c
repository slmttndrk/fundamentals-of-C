#include <stdio.h>

int main () {
   char string[50];

   printf("Enter a string : ");
   gets(string);

   printf("You entered: ");
   puts(string);
    
   return(0);
}
