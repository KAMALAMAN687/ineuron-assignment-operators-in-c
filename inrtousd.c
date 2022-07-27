#include<stdio.h>
int main()
{
    float a,b=76.23,c;
    printf("enter a no. of rupees which have to convert to in USD\n");
    scanf("%f",&a);
    c=a/b;
    printf("%f dollars are in %f",c,a);
    return 0;

}