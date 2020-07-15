//Program to demonstrate
//passing parameters by value
//refer : functions.txt

#include<stdio.h>

void fx(int q)//q is the formal parameter that would receive the data of actual parameter
{
  printf("\n in fx, q : %d ", q);
  q++;//update q (not x)
  printf("\n in fx, q : %d ", q);
}

int main()
{
  int x;//local variable
  x = 10;
  printf("\n in main, x : %d ", x);
  fx(x);//call to fx with x as actual parameter
  printf("\n in main, x : %d ", x);
  return 0;

}
