//Program to calculate greatest of n numbers
//Refer : Recursion.txt

//Thinking:
// greatest(4) = say 10 vs greatest(3)
//and
// greatest(3) = say 50 vs greatest(2)
//and
// greatest(2) = say 20 vs greatest(1)
//and
// greatest(1) = say 17, number itself(17) (base condition)

//generalized form
// g(n) = n vs g(n-1)

//Diagram : recGreatest.png
//Code Follows:

#include<stdio.h>

int greatest(int n)
{
  int x, y;

  printf("\n enter a number : ");
  scanf("%d", &x);//10, 50, 20, 17

  if(n == 1)//base condition for recursion to stop and unwind
    return x;//17
  else
  {
    y = greatest(n-1);
    return x>y ? x : y;
  }

}

int main()
{
  int n;
  int max;
  printf("\n How many numbers to compare : ");
  scanf("%d", &n);
  max = greatest(n);
  printf("\n Greatest number is %d ", max);

  return 0;
}
