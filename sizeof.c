#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;
    a=sizeof(int);
    b=sizeof(char);
    c=sizeof(float);
    d=sizeof(double);
    printf("%d %d %f %lf",a,b,c,d);
    return 0;
}