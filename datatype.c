#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    long long int mul=(a*b);
    if(mul % c!=0) printf("double\n");
    else{
        long long int r=mul/c;
        if (r >= -2147483648 && r <= 2147483647) {
            printf("int\n");
        }
        else {
            printf("long long\n");
        }
    }

 

 
  



   return 0;

}