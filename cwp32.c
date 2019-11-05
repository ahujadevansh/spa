#include<stdio.h>
int main ()
{
    int n,i,sum=0;
    printf("enter one positive integer=");
    scanf("%d",&n);
    if(n<=0)
        printf("invalid data");
    else{
         for(i=1;i<=n;i++)
            sum=sum+i;
         printf("sum of numbers up to %d=%d",n,sum);

        }
    return 0;
}
