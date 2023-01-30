#include <stdio.h>
int main(){
    //%0.1= number if decumal places
    //%2=field width
    //%-4=left allign field width ==4
    float a =100.567;
    float b =2.56;
    float c =34.8904;
    printf("item 1:%.2f\n",a);
    printf("item 2:%10f\n",b);

    return 0;
}