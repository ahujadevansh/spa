#include<stdio.h>
int main ()
{
    int i,n,j,count1=1,count2=1;
    float a,x,term1=1,term2=1,sum=0;
    printf("how many terms=");
    scanf("%d",&n);
    if(n<=0)
        printf("invalid data");
    else
    {
    printf("enter the angle in degrees=");
    scanf("%f",&a);
    x=(a*3.1415)/180;
    //printf("%f",x);
    for(i=1;count1<=n;i++)
    {if(i%2==1)
       {
        term2=1;
        for(j=1;j<=i;j++)
        term2=term2*j;
        if(count2%2!=0)
        sum=sum+pow(x,i)/term2;
        else
        sum=sum-pow(x,i)/term2;
        count2++;
        count1++;
       }
    }
    }
    printf("sin %f =%f",x,sum);
    return 0;

}
