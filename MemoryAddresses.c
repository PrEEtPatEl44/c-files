#include<stdio.h>
int main()
{
    char a[3];
    char c[3];
    char b[3];
    

    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
     return 0;
}