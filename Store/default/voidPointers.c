//void pointers
//refer : voidPointers.png

#include<stdio.h>

int main()
{
  char q = 'z';
  int w = 100;
  double e = 3.456;

  void *p; //a generic pointer

  p = &q; //refer to a char
  printf("\n q : %c ", *(char*)p);//typecast to dereference

  p = &w; //refer to an int
  printf("\n w : %d ", *(int*)p);//typecast to dereference

  p = &e; //refer to a double
  printf("\n e : %f ", *(double*)p);//typecast to dereference


  return 0;
}
