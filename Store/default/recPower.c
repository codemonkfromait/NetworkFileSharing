//Program to calculate x raiseTo y recursively
//Refer : Recursion.txt
//Thinking: recXraisedToYThinking.png
//Diagram : recPower.png
//Code Follows:

#include<stdio.h>

int power(int x, int y)
{
  if(y ==0) //a base condition to stop and unwind the recursion
    return 1;
  else
    return x * power(x, y-1); //recursion

}
int main()
{
  int x, y;
  int ans;

  printf("\n Enter val for x : ");
  scanf("%d", &x);//15
  printf("\n Enter val for y : ");
  scanf("%d", &y);//4

  ans = power(x, y);

  printf("\n %d raiseTo %d : %d",x , y, ans);


  return 0;
}
