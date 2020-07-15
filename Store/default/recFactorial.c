//Program to calculate factorial of a number
//Refer : Recursion.txt

//Thinking:
// 5! = 5 * 4*  3 * 2 * 1
//and
// 4! = 4 * 3 * 2 * 1
//so:
// 5! = 5 * 4!
//generalized form
// n! = n * (n-1)!
//base condition
// 0! = 1

//Diagram : recFactorial.png
//Code Follows:

#include<stdio.h>

int factorial(int n)
{
  if(n ==0) //a base condition to stop and unwind the recursion
    return 1;
  else
    return n * factorial(n-1); //recursion
}

int main()
{
  int n;
  int ans;

  printf("\n Enter val for n : ");
  scanf("%d", &n);//4
  ans = factorial(n);
  printf("\n %d! : %d",n, ans);

  return 0;
}
