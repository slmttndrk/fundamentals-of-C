// C program to show scanf() return type
 
#include <stdio.h>

int main()
{
  int val1;
  char val2;
  int result;
   
   printf("Enter value of val1 and val2: ");
   result=scanf("%d %c",&val1,&val2);
   printf("Total inputs passed successfully are: %d\n",result);
   
   return 0;
}
