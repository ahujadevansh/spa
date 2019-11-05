#include<stdio.h>
int main()
{
    int n,r;
    unsigned long int nf,rf,nrf,ans;
    unsigned long int fact(int);
    printf("enter n and r (nCr)=");
    scanf("%d %d",&n,&r);
    if(n<0||r<0||n<r)
        printf("invalid data");
    else
    {
    nf=fact(n);
    rf=fact(r);
    nrf=fact(n-r);
    ans=nf/(rf*nrf);
    printf("value of %dC%d=%u",n,r,ans);

    }
    return 0;
}

unsigned long int fact(int i)
{
    if(i==0)
        return 1;
    else
        return i*fact(i-1);

}
