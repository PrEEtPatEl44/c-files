#include <stdio.h>
int main(){
    int x=5;
    // augmented assignment operators = used to replace a statement where an operator
    //                                  takes a variable as one of its arguments
    //                                  and then assigns the result back to the same variable
    //                                  x = x + 1
    //                                  x+=1
    //for x=x+2;
    x+=2;
    printf("%d",x);
    /*similarly, x*=2
    x-=2
    x/=2
    x%=2*/
    return 0;
}