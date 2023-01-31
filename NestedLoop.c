#include <stdio.h>
int main(){
    int i,j,r,c;
    char s;
    printf("enter the number of rows");
    scanf("%d",&r);
    printf("enter the number of columns");
    scanf("%d",&c);
    printf("enter the symbol");
    scanf("%c",&s);
    scanf("%c");
    for(int i=1; i<=r; i++){
        for(j=c; j>=1; j--){
            printf("%c",s);
        }
        printf("\n");
    }
}