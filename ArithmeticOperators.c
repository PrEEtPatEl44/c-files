#include <stdio.h>
int main(){
    int x=5;
    int a=8;
    int y = x+a;
    int z =x-a;
    double b =x/(double)a;
    int c=x%a;
    int d=x*a;
    int e=x++;
    int f=x--;
    printf("%d\n",y);
    printf("%d\n",z);
    printf("%lf\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    return 0;
}