#include<stdio.h>
int main()
{
    int i,n;
    void prime(int);
    printf("enter the value of n=");
    scanf("%d",&n);
    printf("\nfollowing are the prime numbers up to %d:",n);
    for(i=1;i<=n;i++)
        prime(i);
        return 0;
}

void prime(int n)
{
    int i,flag=1;
    if(n==1)
        flag=0;
    else if(n==2)
        flag=1;
    else
    {
       for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }

    }
    }
    if(flag==1)
        printf("\n%d",n);
}
