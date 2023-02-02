#include<stdio.h>
int main()
{
    int a = 21;
    int *pA = &a;
    printf("value of a: %d\n", a);
    printf("size of a: %d bytes\n", sizeof(a) );
    printf("address of a: %p\n", &a);
    //pointer stores the adderss of variable as its value
    //size of pointer itself is 8 bytes to store address
    printf("value of pointer %p\n", pA);
    printf("values of variable whose address is stored within the pointer %d\n", *pA);
    printf("address of pointer: %p\n", &pA);

    return 0;
}