#include <stdio.h>
int main(){
    double r;
    const double PI=3.14;

    printf("\n\n\n\n\n\n\n\n\n\nPlease enter the radius of circle in cm");
    scanf("%lf",&r);
    double circumference =2*PI*r;
    printf("circumference: %lf cm",circumference);
    return 0;
}