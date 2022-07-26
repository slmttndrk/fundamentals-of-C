#include <stdio.h>

/* 
 * created in read-write area
 */
char strRW[] = "Hello";


/* 
 * created in read-only area
 */
char* strRO = "Hello";

int main() {
    // Read Write

    printf("%s\n",strRW);
    
    strRW[0] = 'Y';
    
    printf("%s\n",strRW);

    // Read Only

    printf("\n%s\n",strRO);
    
    strRO[0] = 'Y';
    
    printf("%s\n",strRO);

    return 0;
}

/*
When a program in C is executed, binary code is loaded into RAM and is 
segregated into five different areas which are text segment, initialized 
data segment, uninitialized data segment, command-line arguments, stack, 
and heap.

Code instructions are stored in text segment and this is shareable memory. 
If arguments are passed when code is executed from the console, the values 
of arguments are stored in the command line arguments area in memory.

Initialized data segment stores global, static, external variables that 
are initialized beforehand in the program. Uninitialized data segment or 
bss contains all the uninitialized global and static variables.

Stack stores all local variables and arguments of functions. They also 
store a function return address of the instruction, which is to be executed 
after a function call.

Stack and heap grow opposite to each other.

Heap stores all dynamically allocated memory in the program and is managed 
by commands like malloc, calloc, free etc.
*/
