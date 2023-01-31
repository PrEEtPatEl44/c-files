#include <stdio.h>
void BubbleSort(char a[], int length)
{
    for(int i=0; i<length-1; i++)
    {
        for(int j=0; j<length-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void PrintArray(char a[], int length)
{
    for(int i=0; i<length; i++)
    {
        printf("a[%d]=%c\n", i, a[i]);
    }
}
int main ()
{
    char a[]={'D', 'B', 'A', 'E', 'C' };
    int length = sizeof(a)/sizeof(a[0]);
    BubbleSort(a, length);
    PrintArray(a, length);
    
}