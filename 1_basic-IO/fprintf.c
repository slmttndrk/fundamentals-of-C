// C program to show fprintf()
  
#include<stdio.h>
int main()
{

	char str[50];

	//create file 
	FILE *fptr = fopen("example.txt", "w");
	if (fptr == NULL)
	{
		printf("Could not open file");
		return 0;
	}
	
	puts("Enter string");
	scanf("%[^\n]%*c", str);
	fprintf(fptr,"%s\n", str);
	fclose(fptr);

	return 0;
}
