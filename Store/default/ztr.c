//Study of pointer to array
//see: ptrArray.png

#include<stdio.h>

int main()
{
  int arr[6]= {10,20,30,40,50,60};
  int i;
  int *p;


  //assign the address of first element of array to the pointer
  p = arr;//p = &arr[0]

  //traversing the array 
  printf("\n");
  for(i =0 ; i < 6; i++)
    //printf(" %d ", *(p+i));
    //printf(" %d ", *(i+p));//law of association (a+b and b+a mean the same)
    //printf(" %d ", *(arr+i));//substituting p by arr, because p = arr
    //printf(" %d ", p[i]);//evaluates as *(p+i)
    //printf(" %d ", i[p]);//evaluates as*(i+p)
    printf(" %d ", i[arr]);//evaluates as*(i+arr)
  
  
  //conclusion:
  //array can be used like a pointer
  //pointer can be used like an array
  //(when pointer refers to the first element of array)
  
  
  //Difference between the two:
  //array name is a constant that represents
  //the starting address of the array whereas
  //a pointer is a variable that can be made
  //to refer to a different location.
  
  //i.e. arr = a new address is not possible
  //but p = a new address is possible
  
    
  return 0;
}
