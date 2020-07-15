//Program to add the numbers of an array

#include<stdio.h>

int main()
{
  int arr[5];
  int i;
  int sum;
  //input
  printf("\n Enter 5 numbers : ");
  for(i =0; i < 5; i++)
    scanf("%d", &arr[i]);

  //process
  sum =0;
  for(i =0; i < 5; i++)
    sum = sum + arr[i];

  //output
  printf("\n");
  for(i =0; i < 5; i++)
    printf(" %d ", arr[i]);

  printf("\n Sum : %d", sum);

  return 0;
}
