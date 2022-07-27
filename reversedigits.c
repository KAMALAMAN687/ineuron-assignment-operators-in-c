#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a three digit number:");
    scanf("%d",&a);
    b=a%10;
    a/=10;
    c=a%10;
    a/=10;
    printf("%d%d%d",b,c,a);
    return 0;


}