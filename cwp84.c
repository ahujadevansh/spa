#include<stdio.h>
int main()
{
    int n,r;
    unsigned long int nf,rf,nrf,x;
    unsigned long int fact(int);
    printf("enter n and r (nCr)=");
    scanf("%d %d",&n,&r);
    if(n<r||n<0||r<0)
        printf("invalid data");
    else
    {
        nf=fact(n);
        rf=fact(r);
        nrf=fact(n-r);

        printf("%dC%d=%lu",n,r,(nf/(rf*nrf)));
    }
    return 0;
}

unsigned long int fact(int i)
{
    int j,fact=1;
    for(j=1;j<=i;j++)
    {
        fact=fact*j;
    }
    return fact;
}

