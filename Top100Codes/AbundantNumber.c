#include<stdio.h>
int checkAbd(int n);
int main(){
    int n=18;
    (checkAbd(n))? printf("abundant no"):printf(" not abundant no");
    return 0;
}
int checkAbd(int n){
    int sum=0;
    for(int i=1; i<12; i++){
        if(n%i==0){
            sum+=i;
           if(sum>n){
               return 1;
           }
        }
        
        
    }
    return 0;
}