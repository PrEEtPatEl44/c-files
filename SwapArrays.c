#include <stdio.h>
#include <string.h>
int main()
{
    char x[10]="XXX";
    char y[10]="yyy";
    char temp[10];
    strcpy(temp, y);
    strcpy(y, x);
    strcpy(x, temp);
    printf("x=%s\n", x);
    printf("y=%s\n", y);

}