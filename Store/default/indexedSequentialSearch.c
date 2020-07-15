//program to implement indexed sequential search

//refer : sequentialSearch.png
//refer : indexedSequentialSearch.png

#include<stdio.h>

void scanArray(int a[], int s)
{
  int i;
  printf("\n Enter %d numbers : ",s);
  for(i=0; i<s; i++ )
    scanf("%d", &a[i]);
}

void printArray(int a[], int s)
{
  int i;
  printf("\n");
  for(i=0; i<s; i++ )
    printf(" %d", a[i]);
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

int indexedSequentialSearch(int a[], int s, int val)
{
  int i;

  for(i =0; i<s ;i++)
  {
    if(a[i] == val)
      return i;//on match return the index
    else if(a[i] > val)
      return -1;//on finding a greater value in a sorted set, stop with not found status.
  }
  //no match, say it
  return -1;
}

int main()
{
  int arr[7];
  int val;
  int x;

  scanArray(arr, 7);
  bubbleSort(arr, 7);
  printArray(arr, 7);

  printf("\n Enter the value to search : ");
  scanf("%d", &val);

  x = indexedSequentialSearch(arr, 7, val);
  if(x == -1)
    printf("\n %d not found ", val);
  else
    printf("\n %d found at index %d", val, x);

  return 0;
}
