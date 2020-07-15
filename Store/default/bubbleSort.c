//Program to implement Bubble Sort
//see : bubbleSort.png

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

void bubbleSort(int a[], int s)
{
  int i, j;//loop control
  int temp;//swapping

  //dependent quadratic loop : cycles of inner loop depend on the outer loop
  //cycles : n*(n+1)/2

  for(i=s-1; i>0 ; i--)//boundary
  {
    for(j=0; j<i; j++)//pass
    {
      if(a[j] > a[j+1])
      {//swap
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }//for(j
  }//for(i
}

int main()
{
  int arr[6]; //array

  scanArray(arr, 6);
  printArray(arr, 6);
  bubbleSort(arr, 6);
  printArray(arr, 6);


  return 0;
}
