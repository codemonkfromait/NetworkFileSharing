//Program to implement Insertion Sort
//see : insertionSort.png

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

void insertionSort(int a[], int s)
{
  int i, j;//loop control
  int current; //this element

  for(i = 1; i <s ; i++)//boundary
  {
    current = a[i];//pick
    for(j = i-1; j >=0 ; j--)//pass
    {
      if(current < a[j])
        a[j+1] = a[j];//slide
      else
        break;//stop

    }//for(j...
    a[j+1] = current;//insertion
  }//for(i...
}

int main()
{
  int arr[6]; //array

  scanArray(arr, 6);
  printArray(arr, 6);
  insertionSort(arr, 6);
  printArray(arr, 6);

  return 0;
}
