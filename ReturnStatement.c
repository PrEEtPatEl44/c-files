#include <stdio.h>
double HAHA(double a){
    return a*a;
}
int main(){
double x = HAHA(2);
printf("%lf", x);
    return 0;
}/*Suppose that a program is in the middle of a loop (or some nested loops) in a complex function, and suddenly the function finds its answer. This is where the return statement comes in handy. The return command will jump out of any number of loops and pass the value back to the calling function without having to finish the loops or the rest of the function. (See Nested loops, for clarification of the idea of placing one loop inside another.)*/