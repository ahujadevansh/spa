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
         {
          if(i%2==0)
                sum=sum-i;
          else
            sum=sum+i;
         }
         printf("answer of series up to %d=%d",n,sum);

        }
    return 0;
}

