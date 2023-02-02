#include <stdio.h>

int main()
{
  int a = 44;
  int* pTr = &a;
  printf("%p\n", &a);
  printf("%p\n", pTr);
  printf("%d\n", *pTr);
  int b[4] = {33, 22, 11, 57};
  printf("%p\n", b); //address of array b
  printf("%p\n", &b[0]);//address of first element of array b
  //both are equale so we can say that array b is a pointer of first element of itself
  //so we can use this to access other elements
  for(int i=0; i<4; i++)
  {
    printf("%d\n", *(b + i));
  }
  return 0;

  }
  
  