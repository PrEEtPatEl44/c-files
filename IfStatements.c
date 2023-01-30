#include <stdio.h>
int main(){
    int age;
    printf("\nPlease enter your age.");
    scanf("%d",&age);
    if(age>=60){
        printf("you are a senior citizen");
    }
    else if(age>=18 ){
        printf("you are an adult");
    }
    else{
        printf("you are a child");
    }
    return 0;
}