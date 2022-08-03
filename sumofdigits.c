#include<stdio.h>
int main()
{
    int x,y=0;
    printf("enter a three digit number");
    scanf("%d",&x);
    y+=x%10;
    x=x/10;
    y+=x%10;
    x=x/10;
    y+=x%10;
    printf("sum of digits is %d",y);
    return 0;
}    