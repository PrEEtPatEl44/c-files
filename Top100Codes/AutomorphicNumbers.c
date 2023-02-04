#include<stdio.h>
int checkAuto(int n);
int main(){
    int n=25;
    (checkAuto(n))? printf("automorphic"):printf("not automorphic");
    return 0;
}
int checkAuto(int n){
    int sq=n*n;
    while(n=0){
    if(sq%10==n%10){
        return 1;
    }
    else{
        return 0;
    }
    sq/=10;
    n/=10;
    }
    }

