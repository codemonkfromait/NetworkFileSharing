//Program to find whether a given number
//is an armstrong number or not.

//refer : armstrong.png

#include<stdio.h>

int checkArmstrong(int num)//num is the formal parameter that receives the value of actual parameter
{
  int n, x, cube, total;

  //backup the num
  n = num;
  //initialize the total
  total = 0;

  while(num > 0)
  {
    x = num % 10;//extract the last digit
    cube = x*x*x; //find the cube
    total = total + cube;//addition
    num = num /10; //reduce
  }//while

  if(total == n)
    return 1; //send true to the caller
  else
    return 0;//send false to the caller
}

int main()
{
  int number;
  int flag;
  printf("\n Enter a number ");
  scanf("%d", &number);

  flag = checkArmstrong(number);//function call with number as actual parameter
  if(flag == 1)
    printf("\n %d is an armstrong number", number);
  else
    printf("\n %d is not an armstrong number", number);

  return 0;
}
