#include<stdio.h>
int main ()
{
    int i,n;
    float x,term=1,sum=1;
    printf("how many terms=");
    scanf("%d",&n);
    if(n<=0)
        printf("invalid data");
    else
    {
    printf("enter the angle in degrees=");
    scanf("%f",&x);
    x=(x*3.1415)/180;
    for(i=2;i<=n;i++)
    {
        term=term*(((-x)*x)/((2*i-2)*(2*i-3)));
        sum=sum+term;
    }
    }
    printf("cos %f =%f",x,sum);
    return 0;
}


