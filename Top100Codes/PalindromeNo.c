#include <stdio.h>

int main() {
   int num=2002;
   int reverse=0;
   int temp;
   int a=num;//this is because at the end of the while loop num becomes 0
   while(a!=0){
       temp=a%10;
      reverse=(reverse*10)+temp;
       a/=10;
   }
   printf("reverse:%d\n", reverse);
   if(reverse==num){
       printf("%d is a palindrome no\n", num);
   }
   else{
       printf("%d is not a palindrome no", num);
   }

    return 0;
}