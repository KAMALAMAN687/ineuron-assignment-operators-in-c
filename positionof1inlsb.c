#include<stdio.h>
int main()
{
    int a,b=0,c=0;
    printf("enter a no.");
    scanf("%d",&a);
    while(a!=0)
    {
        c=a&1;
        b++;
        if(c==1)
        {
            printf("%d",b);
            break;
        }    
        else
       a=a>>1;
    }
return 0;
}