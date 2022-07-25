#include <stdio.h>

// structure, consist of various type of data types
struct Person{
    char name[50];// string data type
    int age;// int data type
    int house_number;// int data type
    float height;// float data type
};

int main()
{
    // creating object of structure
    struct Person obj ;
    
    // taking input for all data types 
    scanf("%s%d%d%f",obj.name,&obj.age,&obj.house_number,&obj.height);
    
    // printing all the data types
    printf("Name of the person is %s\n",obj.name);
    printf("Age of the person is %d\n",obj.age);
    printf("House Number of the person is %d\n",obj.house_number);
    printf("Height of the person is %f\n",obj.height);
 
    return 0;
}
