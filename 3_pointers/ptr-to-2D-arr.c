#include <stdio.h>

int main()
{
	int arr[3][3] = {{2, 4, 6}, 
			  {0, 1, 0}, 
			  {3, 5, 7}};
	int i, j;
	
	// the below statement is wrong because
	// arr will return the address of a first 1-D array.
	// int *ptr = arr;
	// int *ptr = &arr[0]; is correct or we can write &arr[1], &arr[2].
	
	printf("Addresses : \n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%p[%d%d] ", (*(arr + i) + j), i, j);	
		}
		printf("\n");
	}

	printf("Values : \n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d[%d%d] ", *(*(arr + i) + j), i, j);	
		}
		printf("\n");
	}
	
	return 0;
}
