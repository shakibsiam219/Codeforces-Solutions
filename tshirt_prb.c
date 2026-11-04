#include <stdio.h>
int main()
{
    int discount,price;
    scanf("%d %d",&discount,&price);
    float full;
    full = (price * 100.0) / (100.0- discount);
    printf("%.2f", full);

    return 0;
}