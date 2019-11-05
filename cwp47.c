#include<stdio.h>
int main()
{
    int n,i,sum=1,f=0,s=1,t;
    printf("enter the number of terms");
    scanf("%d",&n);
    if(n<=0)
       printf("invalid data");
    else
        if(n==1)
        {
            printf("0\nsum=0");
        }
        else if(n==2)
        {
            printf(" 0 1\nsum=1");
        }
              else
        {
                printf("0 1 ");
                for(i=3;i<=n;i++)
            {
                t=f+s;
                printf("%d ",t);
                f=s;
                s=t;
                sum=sum+t;
            }
            printf("\nsum=%d",sum);
        }
            return 0;
}
