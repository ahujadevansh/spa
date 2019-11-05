#include<stdio.h>
int main ()
{
    int i,n,sum=0,j,x=1;
    printf("enter the number of terms=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //x=1;
        //for(j=1;j<=i;j++)
        //{
            x=2*x;
        //}
        sum=sum+x;
    }
    printf("sum of series up to %d terms=%d",n,sum);
    return 0;

}
