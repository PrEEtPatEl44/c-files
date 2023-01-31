#include <stdio.h>
int main(){
   int a=0;
   int b=0;
   do{
        printf("please enter a #");
        scanf("%d",&a);
        b+=a;
    }
    while(a!=0);
    printf("%d",b);
}