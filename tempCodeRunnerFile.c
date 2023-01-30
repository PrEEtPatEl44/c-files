#include <stdio.h>
int main(){
    float a=2.4234;
    float b=567.890;
    float c=57.44;
    printf("item 1:   %-8.3f\n",a);//field width %8.3

    printf("item 2:   %8.3f\n",b);//decimal places  
    printf("item 3:   %8.3f\n",c);//left align
    return 0;
}