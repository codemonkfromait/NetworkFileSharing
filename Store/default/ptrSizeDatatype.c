//Study of size and datatype of pointer
//see : ptrSizeDatatype.png

#include<stdio.h>


int main()
{
  int *ip;
  char *cp;
  double *dp;


  printf("\n ------ SIZE OF POINTER ------ ");
  printf("\n int pointer : %d ", sizeof(ip));
  printf("\n char pointer : %d ", sizeof(cp));
  printf("\n double pointer : %d ", sizeof(dp));

  printf("\n ------ DEREFERENCE QTY FOR POINTER ------ ");
  printf("\n int pointer : %d ", sizeof(*ip));
  printf("\n char pointer : %d ", sizeof(*cp));
  printf("\n double pointer : %d ", sizeof(*dp));

  printf("\n ------ ARITHMETIC AFFECT (ADDING 3) ON POINTER ------ ");
  printf("\n int pointer : %u %u ", ip, ip+3);
  printf("\n char pointer : %u %u ", cp, cp+3);
  printf("\n double pointer : %u %u ", dp, dp+3);

  return 0;
}
