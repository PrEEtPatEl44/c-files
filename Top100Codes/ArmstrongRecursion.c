#include<stdio.h>
#include<math.h>
int isArmstrong(int num, int order);
int order(int num);
int main(){
   int num=153;
   if(isArmstrong(num, order(num))==num){
    printf("an armstrong");
   }
   else{
    printf("not an armstrong");
   }
   
  return 0;  
}
int order(int num){
    int length=0;
    while(num!=0){
        num/=10;
        length++;
    }
    return length;
}
int isArmstrong(int num, int order){
    if(num==0){
        return 0;
    }
    int digit = num%10;
    return pow(digit, order)+isArmstrong(num/10, order);// recursion
}