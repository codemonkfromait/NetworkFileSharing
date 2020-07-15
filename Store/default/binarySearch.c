//Program to implement Binary Search
//see : binarySearch.png
//refer : binarySearch.txt

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

int binarySearch(int a[], int s, int val)
{
  int x, y;//boundaries
  int mid;//point of comparison

  x = 0;//lower boundary
  y = s-1;//upper boundary

  while(x <= y )//until boundaries don't cross
  {
    //calculate the point of comparison
    mid = (x+y)/2;

    //compare
    if(val == a[mid])
      return mid;//found, return the position
    else if(val < a[mid])
      y = mid-1;//upper boundary reduces
    else if(val > a[mid])
      x = mid+1;//lower boundary grows
  }//while

  //boundaries have crossed, value not found
  return -1;
}

int main()
{
  int arr[11]; //array
  int val;//value to search
  int flag;//result
  int ch;//loop control

  scanArray(arr, 11);
  bubbleSort(arr, 11);
  printArray(arr, 11);

  do
  {
    printf("\n Enter value to search : ");
    scanf("%d", &val);
    flag = binarySearch(arr, 11, val);
    if(flag == -1)
      printf("\n %d not found ", val);
    else
      printf("\n %d found at index %d ", val, flag);

    printf("\n Search more values 1 : ");
    scanf("%d", &ch);
  }while(ch == 1);

  return 0;
}
