#include<stdio.h>
int isPrime(int i);
int main(){
    int n=100;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            (isPrime(i))? printf("%d\n", i):printf("");
        }
        else{
            printf("");
        }
    }
    return 0;
}
int isPrime(int i){
    if(i<2){
        return 0;
    }
    for(int j=2; j<i; j++){
        if(i%j==0){
            return 0;
        }
    }
    return 1;
}