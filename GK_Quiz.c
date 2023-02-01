#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char questions[][100] = {"1.what is your name?", "2.what is your age?", "3.what is y?"};
    char options[][100] = {"A.p", "B.y", "C.f", "D.m", "A.1", "B.2", "C.3", "D.4","A.7", "B.8", "C.9", "D.6"};
    char answer [] = {'A', 'B', 'C'};
    char guess;
    int score = 0;
    for(int i = 0; i < 3; i++)
    {
        printf("##############################\n");
        printf("%s\n", questions[i]);
        for(int j = i*4; j<(i*4)+4; j++)
        {
            printf("%s\n",options[j]);
        }
        printf("Please enter your answer: ");
        guess = getchar();
        getchar();
        guess = toupper(guess);
        if(guess == answer[i])
        {
            printf("Correct\n");
            score++;
        }
        else
        {
            printf("Incorrect\n");
        }
        printf("score:%d/3", score);
    }
    return 0;
}