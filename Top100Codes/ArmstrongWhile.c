#include<stdio.h>
#include<math.h>
int order(int num);
int isArmstrong(int num, int order);
int main(){
    int num=153;
    if(isArmstrong(num, order(num))){
        printf("An Armstrong");
    }
    else{
        printf("Not An armstrong");
    }

    return 0;
}
int order(int num){
    int digit=0;
    while(num!=0){
        num/=10;
        digit++;
    }
    return digit;
}
int isArmstrong(int num, int order){
    int sum=0;
    while(num!=0){
        
        int temp=num%10;
        sum+=pow(temp, order);
        num/=10;
    }
    return sum;
}