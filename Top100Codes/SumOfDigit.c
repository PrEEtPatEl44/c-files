#include<stdio.h>
int main(){
    int digit=1234;
    int temp;
    int sum=0;
    while(digit!=0){
       temp = digit%10;
        sum+=temp;
        digit=digit/10;
    }
    printf("%d", sum);
    return 0;
}