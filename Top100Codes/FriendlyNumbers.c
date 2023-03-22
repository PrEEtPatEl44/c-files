#include<stdio.h>
int Factors(int n);
int main(){
    int a=6;
    int b=28;
    int s1=Factors(a);
    int s2=Factors(b);
    if(s1/a==s2/b){
        printf("Friendly no's");
    }
    else{
        printf("Not Friendly no's");
    }
    
    return 0;
}
int Factors(int n){
    int sum=0;
    for (int i=1; i<n; i++){
         if(n%i==0){
            sum+=i;
         }
         
    }


    return sum;

}