#include<stdio.h>
void main()
{
    int n,r,j,k;

    unsigned long int nf,rf,nrf;
    unsigned long int factorial(int);

    for(n=0;n<=4;n++)
    {
        nf=factorial(n);

        for(k=1;k<=5-n;k++)
            printf(" ");

        for(r=0;r<=n;r++)
        {
            rf=factorial(r);
            nrf=factorial(n-r);
            printf(" %lu",nf/(rf*nrf));
        }
        printf("\n");
    }
}


unsigned long int factorial(int n)
{
    int i;
    unsigned long int fact=1;

    for(i=1;i<=n;i++)
        fact=fact*i;

    return fact;
}
