#include <stdio.h>
#include <string.h>
void preet(char x[], int y){
     printf("hello i am %s, i am %d years old", x, y);
}

int main(){
    int a;
    char b[10];
    printf("what is full your name?");
    fgets(b, 10, stdin);
    b[strlen(b)-1]='\0';
    printf("How old are you?");
    scanf("%d", &a);
    
    preet(b, a);
   
    return 0;
}
