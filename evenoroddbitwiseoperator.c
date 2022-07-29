#include<stdio.h>
int main()
{
    int a,b=1,c;
    printf("enter a no. which have to checked even or odd: ");
    scanf("%d",&a);
    c=a&b;
    if(c==1)
    {
        printf("odd");
    }    
    if(c==0)
    {
        printf("even");
    }
    return 0;
    

}