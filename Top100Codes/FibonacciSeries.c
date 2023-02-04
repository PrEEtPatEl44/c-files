#include<stdio.h>
int Fibonnaci(int n);
int main(){
    int n=10;
     int a=0;
    int b=1;
    int nxtNO;
    printf("%d\n", a);
    printf("%d\n", b);
     for(int i=2; i<n; i++){
        nxtNO=a+b;
        a=b;
        b=nxtNO;
        printf("%d", nxtNO);      
     }
    
    
   
    
    return 0;
}
