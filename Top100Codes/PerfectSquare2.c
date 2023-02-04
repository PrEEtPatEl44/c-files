#include<stdio.h>
#include<math.h>
int perfectSquare(int n);
int main(){
    int n=4;
    (perfectSquare(n))? printf("It is a perfect square"):printf("It not is a perfect square");
    
    return 0;
}
int perfectSquare(int n){
    if(ceil(sqrt(n))==floor(sqrt(n))){
        return 1;
    }
    return 0;
}