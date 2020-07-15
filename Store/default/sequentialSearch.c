//program to implement sequential search
//refer : sequentialSearch.png

#include<stdio.h>

int sequentialSearch(int a[], int s, int val)
{
  int i;

  for(i =0; i < s; i++)
  {
    if(val == a[i])
    {//found, stop the search and return status (index)
      return i;
    }
  }//for

  return -1; //not found status
}//sequentialSearch


int main()
{
  int arr[7]; //array
  int i;//loop control
  int x;//value to search
  int flag;//search result

  //scan
  printf("\n Enter 7 numbers : ");
  for(i=0; i < 7; i++)
    scanf("%d", &arr[i]);

  //print
  printf("\n");
  for(i =0; i < 7; i++)
    printf(" %d ", arr[i]);

  //ask for search
  printf("\n Enter the value to search ");
  scanf("%d", &x);

  flag = sequentialSearch(arr,7, x);

  if(flag == -1)
    printf("\n %d is not found ", x);
  else
    printf("\n %d found at index %d ", x, flag);

  return 0;
}
