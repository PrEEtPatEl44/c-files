#include <stdio.h>
#include <math.h>
int main(){
    double a;
    double b;
    printf("please enter the length of side a in cms");
    scanf("%lf",&a);
    printf("please enter the length of side b in cms");
    scanf("%lf",&b);
    double c=sqrt(a*a+b*b);
    printf("hypotaneous :%lf cms",c);
return 0;
}