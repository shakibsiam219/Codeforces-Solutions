#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int even=a%2==0;
    int  odd=b%2==1;
    if(even && odd) printf("YES");
    else if (even && even) printf("YES");
    else if(odd && odd) printf("YES");

    else printf("NO");

    return 0;

}