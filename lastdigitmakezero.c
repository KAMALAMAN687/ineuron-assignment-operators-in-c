#include<stdio.h>
int main()
{
    int a;
    printf("enter a no.: ");
    scanf("%d",&a);
    a/=10;
    a*=10;
    printf("%d",a);
    return 0;
}