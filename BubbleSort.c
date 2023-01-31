#include <stdio.h>
void bubble_sort(int a[], int length)
{
 for(int i=0; i<length; i++)
    {
        for(int j=0; j<length-1; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }            
        }
        
    }
}
void Print_array(int a[], int length)
{
  
    for(int i=0; i<4; i++)
    {
    printf("a[%d]=%d\n", i, a[i]);
    }
}
int main ()
{
    int a[]={4,3,2,1};
    int length =sizeof(a)/sizeof(a[0]);
   // printf("%d",length);
    bubble_sort(a, length);
    Print_array(a, length);
   
}