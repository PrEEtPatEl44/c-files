#include <stdio.h>
#include <string.h>
int main(){
    char name[25];
    printf("what is your name?");
    fgets(name, 25, stdin);
   name[strlen(name)-1]='\0';//to get rid of new line character
   
    while(strlen(name) == 0)
    {
        printf("\nenter your name.");
         printf("\nwhat is your name?");
         fgets(name, 25, stdin);
         name[strlen(name)-1]='\0';
    }
    printf("hello %s", name);
    return 0;
}