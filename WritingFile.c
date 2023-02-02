#include<stdio.h>
int main()
{
    //FILE *pF =fopen("hello.txt", "a");
    //fprintf(pF,"hello world");
if( remove("hello.txt")==0)
{
printf("file removed successfully");
}
else{
    printf("file was not removed");
}
//Note: Just like with the w mode; if the file does not exist, the a mode will create a new file with the "appended" content.
   
}