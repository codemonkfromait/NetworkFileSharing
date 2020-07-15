//Program to study code managed memory allocation and use.
//refer : memoryMgmt.png

#include<stdio.h>
#include<stdlib.h>

int * allocateArray(int x)
{
  int size ;
  int *ptr;

  size= x * sizeof(int);
  ptr = (int*) malloc(size);
  //if memory allocation succeeds ptr will
  //have address of block of said size
  //but if it fails the ptr will be NULL.

  return ptr;
}


void scanArray(int *arr, int n)
{
  int i;

  printf("\n enter %d numbers : ", n);
  for(i =0; i< n; i++)
    scanf("%d", &arr[i]);

}


void printArray(int *arr, int n)
{
  int i;

  printf("\n");
  for(i =0 ; i < n; i++)
    printf(" %d ", *(arr+i));
}

int main()
{
  int *arr;
  int n, i;
  int newsize;
  double avg;

  printf("\n Enter size of array : ");
  scanf("%d", &n);//5

  arr = allocateArray(n);

  if(arr == NULL)
  {
    printf("\n memory allocation failed");
    return 1;//terminate main with error status
  }

  //scan
  scanArray(arr, n);

  //expand by 1 unit
  n++;//6
  newsize = n* sizeof(int);//24

  arr = realloc(arr, newsize);
  //fill some data in last element
  arr[n-1] = 100;

  //average
  avg = 0;
  for(i =0; i < n; i++)
    avg+= arr[i];
  avg/=n;

  
  //print
  printArray(arr, n);
  printf("\n Average of values : %f", avg);

  //free it
  free(arr);

  //more code possible here
  //but arr wont be usable
  
  return 0;
}
