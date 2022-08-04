#include <stdio.h>

int main() 
{
	// array declaration and initialization 
	int arr_sample[5] = {3, 5, 7, 9, 11};

	// printing the addresses and values represented by arr_sample, &arr_sample and &arr_sample[0]
	printf("arr_sample : %p, Value : %d\n", arr_sample, *arr_sample);
	
	printf("&arr_sample : %p, Value : %d\n", &arr_sample, *(arr_sample));
		
	printf("&arr_sample[0] : %p, Value : %d\n", &arr_sample[0], *(&arr_sample[0]));
    
    printf("=============================\n");

    // array declaration and initialization
    int arr[5] = {2, 4, 6, 8, 10}, i;
        
    for(i = 0; i < 5; i++)
    {
        // printing the elements address and value at
        // arr[i] using *(arr + i) syntax
        printf("[index %d] Address : %p, Value : %d\n", i, (arr + i), *(arr + i));
    }

	return 0;
}
