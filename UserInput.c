#include <stdio.h>
int main(){
    char d[50] ;
    int age;
  /** printf("what is your name");
    scanf("%s",&d); scanf does not read spaces in user input
    printf("your name is %s.",d);*/
    //but if you write your full name it wil only accept first name as there is a space
    printf("what is your name");
    fgets(d, 50, stdin);
    printf("how old are you");
    scanf("%d",&age);
    printf("your name is %s.\n",d);
    printf("you are %d years old",age);

    return 0;

}