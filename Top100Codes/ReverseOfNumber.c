#include<stdio.h>
int main(){
    int num;
    int reverse=0;
    int temp;
    printf("Enter the nu,ber:");
    scanf("%d", &num);
    
   
    while(num!=0){
        temp=num%10;
        reverse = reverse * 10 + temp;
        num=num/10;
        }
        printf("reverse:%d", reverse);
        return 0;
}