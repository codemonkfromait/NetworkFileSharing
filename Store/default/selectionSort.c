//Program to implement Selection Sort
//see : selectionSort.png

#include<stdio.h>

void scanArray(int a[], int s)
{
  int i;
  //scan
  printf("\n Enter %d numbers : ",s);
  for(i=0; i < s; i++)
    scanf("%d", &a[i]);
}

void printArray(int a[], int s)
{
  int i;
  //print
  printf("\n");
  for(i =0; i < s; i++)
    printf(" %d ", a[i]);
}

void selectionSort(int a[], int s)
{
  int i,j; //loop control
  int min; //represent index of element with min value
  int temp;//swapping

  for(i =0; i < s-1 ;i++)//boundary
  {
    min = i;//assumption
    for(j = i+1; j<s; j++)//pass
    {
      if(a[j] < a[min])
      {//value at j is smaller, hence
        min = j; //selection
      }
    }//for(j...

    if(min != i)
    {//assumed and actual minimum are different
     //swap
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
    }
  }//for(i...
}

int main()
{
  int arr[6]; //array

  scanArray(arr, 6);
  printArray(arr, 6);
  selectionSort(arr, 6);
  printArray(arr, 6);

  return 0;
}
