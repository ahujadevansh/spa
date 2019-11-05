#include<stdio.h>
int main ()
{
    int sum=0,n,i;
    printf("enter the number of terms=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(int)pow(2,i);
    }
    printf("sum of series up to %d terms=%d",n,sum);
    return 0;
}
