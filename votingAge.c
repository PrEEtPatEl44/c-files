#include<stdio.h>
int main()
{
    int myAge;
    printf("Please enter your age:\n");
    scanf("%d",&myAge);
    int votingAge=18;
    if(myAge>=votingAge)
    {
        printf("you are eligible for voting");
    }
    else
    {
        printf("you are not eligible for voting");
        printf("Try again %d years later.", votingAge-myAge);
    }
   
    return 0;
}