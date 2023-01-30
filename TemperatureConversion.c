#include <stdio.h>
int main(){
    char unit;
    printf("please enter thr unit yo want to convert temperature in.");
    scanf("%c",&unit);
    switch(unit){
        case 'c':
        double F;
        printf("please enter the temperature in farenheit");
        scanf("%lf",&F);
        double a=(F-32)*0.555;
        printf("the temperature in clesius i %lf",a);
        break;
        case 'f':
        double C;
        printf("please enter the temperature in celsius ");
        scanf("%lf",&C);
        double b=(C*1.8)+32;
        printf("the temperature in farenheit is %lf",b);
        break;
        default:
        printf("sorry");
    }
    return 0;
}