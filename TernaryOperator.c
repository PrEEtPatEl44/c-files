#include <stdio.h>
int FindMin(int x,int y){
  /* if(x>y){
    return y;
   }
   else{
    return x;
   }*/
   return(x>y)? y:x;
   //ternary operator shorter version of if else
   //syntax = (condition)? if true value:if false value

}
int main(){
    int a =FindMin(3, 10);
    printf("%d",a);
    return 0;

}