#include <stdio.h>
int main(){
    int b=0;
    int n;
    printf("enter the value of n.");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        
        b+=i;
    }
    printf("%d",b);
}