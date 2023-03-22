#include<stdio.h>
#include<math.h>
int order(int n);
int isArmstrong(int n, int i);
int main(){
    int n=153;
    if(n==isArmstrong(n , order(n))){
        printf("is an armstrong");
    }
    else{
        printf("not am armstrong");
    }
    
    return 0;
}
int order(int n){
    int i;
    while(n!=0){
        n/=10;
     i++;
    }
    return i;
}
int isArmstrong(int n, int i){
    if (num==0){
        return 0;
    }
        int a=n%10;

        return pow(a,i)+isArmstrong(n/10, i);
    
}