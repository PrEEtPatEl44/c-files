#include<stdio.h>
int Fib(int n);
int main(){
    int n=10;
    for(int i=0; i<n; i++){
        
        printf("%d\n", Fib(i));
       
    }

    return 0;
}
int Fib(int n){
    if(n<2){
        return n;
    }
    
        return Fib(n-1)+Fib(n-2);
    
}
