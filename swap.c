#include<stdio.h>
int main()
{
    int x,y,c;
    scanf("%d%d",&x,&y);
    c=x;
    x=y;
    y=c;
    printf("swaped values of x and y is %d & %d",x,y);
    return 0;

}