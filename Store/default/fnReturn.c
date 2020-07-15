//Study of return statement
//Program to calculate cube of a number
//refer : functions.txt


#include<stdio.h>

int fx(int q)//q is the formal parameter that receives the value of actual parameter
{
  int result;
  result = q*q*q;
  return result;
}

int main()
{
  int x, ans;
  printf("\n Enter a number : ");
  scanf("%d", &x);

  ans = fx(x);//invoking fx with x as actual parameter

  printf("\n Cube of %d is %d", x, ans);
  return 0;
}
