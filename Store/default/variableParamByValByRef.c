//Passing variables as parameters to a function
//by value (x) and by reference (y)

//see : variableParamByValByRef.png

#include<stdio.h>

void cube(int copyX, int *locY)
{
  *locY = copyX * copyX * copyX;
}
int main()
{
  int x,y;

  printf("\n enter a number : ");
  scanf("%d", &x);

  cube(x,&y);

  printf("\n cube of %d is %d ",x , y);

  return 0;
}
