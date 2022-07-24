#include<stdio.h>
int main()
{
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    printf("without it's last digit of a entered number is : %d",x/10); //it give unit digit of a given number
    return 0;
}