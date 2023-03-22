#include<stdio.h>

int main(){
    int n=24;
    int sum=0;
    while(n!=0){
        int temp=n%10;
        sum+=temp;
        n/=10;
    }
    if(n%sum==0){
        printf("Harshad number");
    }
    else{
        printf("not a harshad number");
    }
    
    return 0;
}
