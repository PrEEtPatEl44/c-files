#include <stdio.h>
#include <stdbool.h>  // Import the boolean header file 
double add(double x, double y);
double multiply(double x, double y);
double sub(double x, double y);
double div(double x, double y);
int main(){
  //double x,y;
  char operator;
  
  printf("enter 1st number:");
  scanf("%d",&x);
  printf("enter 2nd number:");
  scanf("%d",&y);
  printf("Enter the operator: ");
  scanf("%c\n", &operator);
  if(operator = '+'){
    add(x,y);
    printf("Result:%d",add(x,y));
  }
  else if(operator = '*'){
    multiply(x,y);
    printf("Result:%d",multiply(x,y));
  }
  else if(operator = '-'){
    sub(x,y);
    printf("Result:%d",sub(x,y));
  }
  else if(operator = '/'){
    div(x,y);
    printf("Result:%lf",div(x,y));
  }
  else {
    printf("enter a valid operator");
  }
 return 0;
}
double add(double x, double y){
  return x+y;
}
double multiply(double x, double y){
  return x*y;
}
double sub(double x, double y){
  return x-y;
}
double div(double x, double y){
  return x/y;
}