#include<stdio.h>
#include<math.h>
int order(int num);
int isArmstrong(int num, int order);
int main(){  
    int a;
    int k;
    printf("Enter the lower bound:");
    scanf("%d", &a);
    printf("ENter the upper bound");
    scanf("%d", &k);
    for(int num=a; num<=k; num++){
        if(isArmstrong(num, order(num))==num){
            printf("%d\n", num);
        }
        else{
            printf("");
        }
    }
    return 0;
}
int order(int num){
    int length;
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
    int temp=num%10;
    return pow(temp, order)+isArmstrong(num/10, order);

}