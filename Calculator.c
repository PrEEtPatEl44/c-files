#include <stdio.h>
#include<math.h>
int main(){
    printf("\nfor square root press S\nfor tan press t\nfor sin press s\nfor cos press c\nfor other operators use the default signs\n");
    char operator;
    double x;
    double y;
    double a;
    printf("\nplease enter the operator");
    scanf("%c" ,&operator);
    
    if(operator=='+'){
         printf("please enter the first number");
         scanf("%lf",&x);
         printf("please enter the second number");
         scanf("%lf",&y);
        a=x+y;
    printf("%lf",a);
    }
    else if(operator=='-'){
         printf("please enter the first number");
         scanf("%lf",&x);
         printf("please enter the second number");
         scanf("%lf",&y);
        a=x-y;
        printf("%lf",a);
    }
    else if(operator=='*'){
         printf("please enter the first number");
         scanf("%lf",&x);
         printf("please enter the second number");
         scanf("%lf",&y);
        a=x*y;
        printf("%lf",a);
    }
    else if(operator=='/'){
         printf("please enter the first number");
         scanf("%lf",&x);
         printf("please enter the second number");
         scanf("%lf",&y);
        a=x/y;
        printf("%lf",a);
    }
     else if(operator=='S'){
         printf("please enter the number");
         scanf("%lf",&x);
         a=sqrt(x);
        printf("%lf",a);
    }
    else if(operator=='t'){
         printf("please enter the number");
         scanf("%lf",&x);
         a=tan(x);
        printf("%lf",a);
    }
     else if(operator=='s'){
         printf("please enter the number");
         scanf("%lf",&x);
         a=sin(x);
        printf("%lf",a);
    }
     else if(operator=='c'){
         printf("please enter the number");
         scanf("%lf",&x);
         a=cos(x);
        printf("%lf",a);
    }
    else {
        printf("sorry");
            }
    return 0;

}