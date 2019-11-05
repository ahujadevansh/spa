#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number=");
    scanf("%d",&n);
    if(n<0)
        printf("invalid data");
    else
    {
        printf("folling are the prime factors of %d: ",n);
        while(n!=1)
        {
            for(i=2;i<=n;i++)
            if(n%i==0)
               {
                    printf("%d ",i);
                    n=n/i;
                    break;
               }
        }
    }
    return 0;
}

