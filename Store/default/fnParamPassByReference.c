//Part 1: Array initializer
//Array initializer allows assignment of
//default (preset) values to the array elements
//while declaration.

//Part 2: Passing array as parameter to a function
//See : fnParamPassByReference.png
//Refer : functions.txt 

#include<stdio.h>

void fx(int a[])//formal parameter a is declared as an array reference, to receive an array as a parameter.
{
  //"a" refers to the memory of actual parameter array.
  //Action on "a" will update the memory of actual parameter array.
  a[1] = 99;
}

int main()
{
  int i;

  //int arr[3];//elements contain garbage
  int arr[3] = {10,20,30};//elements store 10,20 and 30 respectively
  //int arr[3] = {10};//elements store 10,0 and 0 respectively
  //int arr[3] = {10,20};//elements store 10,20 and 0 respectively
  //int arr[3] = {10,20,30,40};//error/warning : excess values in initializer.


  printf("\n ----Before fx----");
  printf("\n");
  for(i =0; i < 3; i++)
    printf(" %d ", arr[i]);


  fx(arr);//call to fx with arr as actual parameter

  printf("\n ----After fx----");
  printf("\n");
  for(i =0; i < 3; i++)
    printf(" %d ", arr[i]);

  return 0;
}
