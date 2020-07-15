//Program to print and count the even numbers stored in an array
//See: arrEven.png

#include<stdio.h>

int main()
{
  //declare an array of 7 integers
  int arr[7];
  int i;
  int cnt;

  //scan 7 values from user
  printf("\n Enter 7 numbers : ");
  for(i=0; i<7; i++)
    scanf("%d", &arr[i]);//ith element

  //process and output
  printf("\n");//line change

  cnt = 0;
  for(i=0; i<7; i++)
  {
    if(arr[i]%2 == 0)
    {
      printf(" %d ", arr[i]);//ith element
      cnt++;
    }//if
  }//for

  printf("\n Even numbers count : %d", cnt);
  return 0;
}
