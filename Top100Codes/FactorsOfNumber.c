#include<stdio.h>
int main(){
    int n=100;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            printf("%d\n", i);
        }
        else{
            printf("");
        }
}
return 0;
}