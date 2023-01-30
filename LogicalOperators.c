#include<stdio.h>
#include<stdbool.h>
int main(){
    // AND && To check both conditions
    // OR || anyone condition should be true
    // NOT ! reverses the state of conditon
    double temp;
    bool cloudy=true;
    printf("plesae enter the temp ");
    scanf("%lf",temp);
    if(temp>=20 && temp<=30){
        printf("it is good temperature");
    }
    else if(temp>30 || temp<10){
        printf("it is absurd temperature");
    }
    else {
        printf("it is ok temperature");
    }
    return 0;


}