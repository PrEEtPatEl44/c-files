#include<stdio.h>

int Sum(int n, int k);
int main(){
   int n;
   int k;
   printf("Enter the range from:");
   scanf("%d", &n);
   printf("Enter the range to:");
   scanf("%d", &k);
  int x=Sum(n,k);
  printf("Sum:%d", x);
    return 0;
}
int Sum(int n, int k){
    int b;
     for(int i=n; i<=k; i++){
       b+=i;
   }
   return b;
}