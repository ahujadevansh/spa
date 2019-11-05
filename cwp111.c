#include<stdio.h>
void main()
{
    int fibbo(int);
    int n,i,sum=0;
    int f[100];

    printf("enter no of terms(not more than 100: ");
    scanf("%d",&n);

    if(n<0||n>100)
        printf("invalid data");
    else
    {
        for(i=1;i<=n;i++)
        f[i]=fibbo(i);

        printf("folling is fibbonaccii series of %d terms:\n",n);

        for(i=1;i<=n;i++)
        {
            printf("%d   ",f[i]);
            sum=sum+f[i];
        }

        printf("\nsum of fibbonaccii series of %d terms: %d",n,sum);

    }
}

int fibbo(int n)
{
    int f=0,s=1,t,i;

    if(n==1)
        return 0;
    else
        if(n==2)
            return 1;
        else
        {
            for(i=3;i<=n;i++)
            {
                t=f+s;
                f=s;
                s=t;
            }
            return t;
        }
}






