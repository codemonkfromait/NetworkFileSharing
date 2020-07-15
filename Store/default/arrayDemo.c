//Program to demonstrate array
//see : arrays.png

#include<stdio.h>

int main()
{
  //declare an array of 5 integers
  int arr[5];
  int i;

  //scanf 5 values from user and store in array
  printf("\n Enter 5 numbers : ");
/*
  scanf("%d", &arr[0]);//first element
  scanf("%d", &arr[1]);//second element
  scanf("%d", &arr[2]);//third element
  scanf("%d", &arr[3]);//fourth element
  scanf("%d", &arr[4]);//fifth element
*/

  // repetitive ↑, hence loop ↓
  for(i=0; i<5; i++)
    scanf("%d", &arr[i]);//ith element

  //output
  printf("\n");//line change
  for(i=0; i<5; i++)
    printf(" %d ", arr[i]);//ith element


  return 0;
}
