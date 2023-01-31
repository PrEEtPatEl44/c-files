#include <stdio.h>
#include <string.h>
int main()
{
    char cars[][25]={"accent","vento","swift","dodge","ferrari","buggati"};
    strcpy(cars[0], "tesla");
    for(int i=0; i<6; i++)
    {
      printf("%s\n",cars[i]);
    }
}