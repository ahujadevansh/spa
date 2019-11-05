#include<stdio.h>
void main()
{
    unsigned long int factorial(int);

    int n,r,option;
    unsigned long int nf,rf,nrf;

    printf("1.nPr\n2.nCr\n3.both\nenter choice:  ");
    scanf("%d",&option);

    printf(" enter n and r: ");
    scanf("%d %d",&n,&r);

    nf=factorial(n);
    rf=factorial(r);
    nrf=factorial(n-r);

    switch (option)
    {
        case 3:
        case 1:printf("%dP%d=%lu\n",n,r,nf/nrf);if(option!=3) break;
        case 2:printf("%dC%d=%lu\n",n,r,nf/(rf*nrf));break;


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
