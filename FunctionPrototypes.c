#include <stdio.h>
void hello(char a[], int b);// funnction prototype 
// used to ensure arguments are entered correctly
//if not used the program can compile with an unexpected error as compilers do not match arguments
int main(){
hello("bro", 18);
}
void hello(char a[], int b){
    printf("hello %s\n",a);
    printf("you are %d years old", b);
    
}