#include<stdio.h>
int main(){
    double radius;
    const double PI = 3.14;
printf("please enter the radius of the circle in meters.");
scanf("%lf",&radius);
double area = PI*radius*radius;
printf("the are of the circle is %lf meter square",area);

    return 0;
}