#include <stdio.h>

//object like macro
#define PI 3.14

// function like macro
#define Area(r) (PI*(r*r))

void main()
{
    // declaration and initialization of radius
    float radius = 2.5;

    // declaring and assgining the value to area
    float area = Area(radius);

    // Printing the area of circle
    printf("Area of circle is %f\n", area);
    
    // Using radius as int data type
    int radiusInt = 5;
    printf("Area of circle is %f\n", Area(radiusInt));

    // PREDEFINED MACROS
    printf("======================\nPREDEFINED MACROS\n");

    printf("This is line no.: %d\n", __LINE__);
    printf("Name of this file: %s\n", __FILE__);
    printf("Current Date: %s\n", __DATE__);
    printf("Current Time: %s\n", __TIME__);
    printf("Compilation success: %d\n", __STDC__);
    
}

/*
we passed the value of radius as a float of type integer. So macros gave us 
the advantage to use the same macro for different datatypes because there 
is no type checking of arguments.
*/
