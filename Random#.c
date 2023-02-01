#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int num1 = (rand() % 10)+1;
    int num2 = (rand() % 10)+1;
    int num3 = (rand() % 10)+1;
    printf("%d\n",num1);
    printf("%d\n",num2);
    printf("%d\n",num3);
}