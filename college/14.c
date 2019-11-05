#include<stdio.h>
void main()
{
    int n,r,i,k,num;
    unsigned long int nf,rf,nrf;
    unsigned long int fact(int);

    printf("num: ");
    scanf("%d",&num);

    for(n=0;n<=num;n++)
    {
        for(k=1;k<=num-n;k++)
            printf(" ");

        nf=fact(n);

        for(r=0;r<=n;r++)
        {
            rf=fact(r);
            nrf=fact(n-r);

            printf("%  d",nf/(rf*nrf));
        }
        printf("\n");
    }

}

unsigned long int fact(int n)
{
    int i,fact=1;

    for(i=1;i<=n;i++)
        fact=fact*i;

    return fact;
}

