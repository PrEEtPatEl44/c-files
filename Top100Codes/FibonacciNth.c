#include<stdio.h>
int Fib(int n);
int main(){
    int n=10;
<<<<<<< HEAD
    for(int i=0; i<=n; i++){
        if(i!=n){
            continue;
        }
        else{
            printf("%d\n", Fib(i));
        }
    }
=======
            printf("%d\n", Fib(i));
    
>>>>>>> 4233cf7bad6b823dd28fc1541e4cde8ea4f8d3b2

    return 0;
}
int Fib(int n){
    if(n<2){
        return n;
    }
    return Fib(n-1)+Fib(n-2);
<<<<<<< HEAD
}
=======
}
>>>>>>> 4233cf7bad6b823dd28fc1541e4cde8ea4f8d3b2
