#include<stdio.h>
<<<<<<< HEAD
int main(){
    int a;
    printf("Please Enter the #");
    scanf("%d", &a);
    if(a%2==0){
        printf("the number is Even");

    }
    
    else {
        printf("the number is Odd");
    }
    return 0;
}
=======
int isPrime(int i);
int main(){
int n=99;
for(int i=1; i<=n; i++){
    if(n%i==0){
       (isPrime(i))? printf("%d\n", i):printf("");
    }
    else{
        printf("");
    }
}
    return 0;
}
int isPrime(int i){
    if(i<2){
        return 0;
    }
    for(int j=2; j<i; j++){
        if(i%j==0){
            return 0;
        }

    }
    return 1;
}
>>>>>>> 4233cf7bad6b823dd28fc1541e4cde8ea4f8d3b2
