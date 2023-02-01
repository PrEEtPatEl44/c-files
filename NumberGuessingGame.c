#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int guesses=0;
    int answer = (rand() % 100) + 1;
    int guess;
    do {
    printf("\nEnter your guess.");
    scanf("%d", &guess);
    if(guess<answer){
        printf("\ntoo low\n");
    }
    else if(guess>answer){
        printf("\ntoo high\n");
    }
    guesses ++;
    }
    while (guess!=answer);
    printf("****************\n");
   printf("Correct\n"); 
   printf("Score:%d", guesses);
    printf("****************\n");
    
}