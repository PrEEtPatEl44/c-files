#include<stdio.h>
int getFactorial(int n);
int checkStrong(int n);
int digit(int n);
int main(){
    (checkStrong(145))? printf(" a strong no"):printf("not a strong no");
    return 0;
}
int getFactorial(int n){
    int fact;
    for(int i=1; i<=n; i++){
        fact = fact*i;
        return fact;
    }
}

int checkStrong(int n){
    int temp;
    int digit;
    int sum=0;
    while(n!=0){
        temp=n%10;
        sum+=getFactorial(digit);
        n/=10;
    }
    if(sum==n){
        return 1;
    }
}
    
    