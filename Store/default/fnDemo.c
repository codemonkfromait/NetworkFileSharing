//Program to demonstrate functions
//see : Basics/Life Cycle of C Program.png
//refer : functions.png

#include<stdio.h>

//function
void fx()           //signature
{                   //body:
  printf("\n A");     //statement 1
  printf("\n B");     //statement 2
  printf("\n C");     //statement 3
}

int main()
{
  printf("\n 1");
  printf("\n 2");
  printf("\n 3");
  fx();//function call / invocation
  printf("\n 4");

  return 0;
}
