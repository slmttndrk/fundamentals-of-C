/**                                     //Documentation
 * file: age.c
 * author: you
 * description: program to find our age.
 */

#include <stdio.h>                      //Link

#define BORN 2000                       //Definition

int age(int current);                   //Global Declaration

int main(void)                          //Main() Function
{
  int current = 2021;
  printf("Age: %d\n", age(current));

  return 0;
}

int age(int current) {                  //Subprograms
    return current - BORN;
}
