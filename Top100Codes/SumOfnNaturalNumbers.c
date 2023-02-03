#include<stdio.h>
int Sum(int a);
int main(){
   int n;
   printf("enter the value of n:");
   scanf("%d", &n);
   int sum=Sum(n);
   printf("sum:%d", sum);
    return 0;
}
int Sum(int a){
    int b;
    for(int i=1; i<=a; i++){
        
        b+=i;
    }
    return b;
}

