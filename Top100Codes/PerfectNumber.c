#include<stdio.h>
int checkPerfect(int n);
int main(){
int n=6;
if(checkPerfect(n)==n){
    printf("A perfect number");
}
    return 0;
}


int checkPerfect(int n){
    int sum=0;
 for(int i=1; i<6; i++){
        if(n%i==0){
           // printf("%d\n", i);
            sum+=i;
          
        }
        else{
            printf("");
        }
        
    }
    return sum;
}