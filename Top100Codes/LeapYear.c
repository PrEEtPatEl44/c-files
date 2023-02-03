#include<stdio.h>
int main(){
    int year=2100;
    //int a=year/4;
    if(year%4==0){
        if(year%100!=0){
            printf("it is a leap year");
        }
        else{
            if(year%400!=0){
                printf("it is not a leap year");
            }
            else{
                printf("it is a leap year");

            }
        }
    }
    
}