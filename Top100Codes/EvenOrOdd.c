#include<stdio.h>
int main()
{
    int num;
    int a = num%2;
    printf("Enter a  number");
    scanf("%d", &num);
    (a==0)? printf("EVEN"):printf("ODD");
    return 0;
}