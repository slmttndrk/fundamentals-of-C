// C program to show printf() return type
 
#include <stdio.h>

int main()
{
   int result;
   int val1;
   char val2;
   printf("Enter value of val1 and val2: ");
   scanf("%d %c",&val1,&val2);
   result =printf("%d%c",val1,val2);
   printf("\nTotal printed characters are: %d\n",result);
   
   return 0;
}
