#include<stdio.h>
int main()
{
    //FILE *pF =fopen("hello.txt", "w");
    //fprintf(pF,"hello world");
if( remove("hello.txt")==0)
{
printf("file removed successfully");
}
else{
    printf("file was not removed");
}
   
}