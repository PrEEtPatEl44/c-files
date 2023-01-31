#include <stdio.h>
int main()
{
    double a[25]={20.0, 44.0, 56.0, 78.0, 90.0};
    /*Array can alo be declared first and then assigned
      double a[25]; //decleration
      a[0]=20
      a[1]=44
      a[2]=56
      a[3]=78
      a[4]=90*/
    for(int i=0; i<5; i++)
    {
        printf("%lf\n",a[i]);
    }
return 0;
}