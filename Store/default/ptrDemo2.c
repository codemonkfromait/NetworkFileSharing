//Accessing a variable through its memory location : way 2
//see : pointers.png

#include<stdio.h>

void fx(int *p)//pointer p is the formal parameter that receives the memory location of the actual parameter
{
  //derferencing (act on p to the access of the variable, address of which it stores.
  *p = 100;
}

int main()
{
  int x; //an int variable

  fx(&x);//passing memory location of variable x as actual parameter to a function

  //check the value in x
  printf("\n x : %d ", x);


  return 0;
}
