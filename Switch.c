#include<stdio.h>
int main(){
  char gpa;
    printf("please enter your gpa ");
    scanf("%d",&gpa);
    switch(gpa){
        case 1:
        printf("bad");
        break;
        case 2:
        printf("try harder");
        break;
        case 3:
        printf("good");
        break;
        case 4:
        printf("excellent");
        break;
        case 5:
        printf("great");
        break;
        default: printf("sorry");
    }
    //in c switches can only be used with constant variables
    //  switches only can check equality cannot use <, > operators
    return 0;
}