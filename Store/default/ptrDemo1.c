//Accessing a variable through its memory location : way 1
//see : pointers.png

#include<stdio.h>

int main()
{
  int x; //an int variable
  int *p; //an int pointer

  //referencing (fetch the address of variable and assign to a pointer)
  p = &x;

  //dereferencing (act on pointer to get the access of the variable, it refers to)
  *p = 100;

  //check the value in x
  printf("\n x : %d ", x);


  return 0;
}
