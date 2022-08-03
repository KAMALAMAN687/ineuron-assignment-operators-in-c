#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a three digit number:");
    scanf("%d",&a);
    b=a%10;
    b*=100;
    c=a/10;
    b=b+c;
    printf("%d",b);
    return 0;


}