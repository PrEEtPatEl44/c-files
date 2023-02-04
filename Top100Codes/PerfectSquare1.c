#include<stdio.h>
#include<math.h>
int perfectSquare(int n);
int main(){
     int n=8;
     if(n<=0){
        printf("not valid");
     }
     (perfectSquare(n))? printf("it is a perfect square"):printf("it is not a perfect square");
  
    return 0;
}
int perfectSquare(int n){
    int sr =sqrt(n);
    if(sr*sr==n){
        return 1;
    }
    return 0;
}