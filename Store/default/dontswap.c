//Program to test pass by value
//swap 2 numbers
//LEARNING For the case : PASS BY VALUE
//The process on formal parameter doesn't update the actual parameter.

#include<stdio.h>

void swap(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main()
{
  int x, y;//local variables
  x = 10;
  y = 20;
  printf("\n %d  %d", x, y);//10 20
  swap(x,y);
  printf("\n %d  %d", x, y);//10 20

  return 0;

}
