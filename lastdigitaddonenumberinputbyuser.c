#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a number and digit: ");
    scanf("%d%d",&a,&b);
    a=a*10;
    a=a+b;
    printf("updated number is %d",a);
    return 0;

}