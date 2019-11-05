#include<stdio.h>
int main()
{
    int n,i,j,k,x,y;
    for(n=1000;n<=9999;n++)
    {
        x=n%100;
        y=n/100;
        i=(int)sqrt(n);
        j=(int)sqrt(x);
        k=(int)sqrt(y);
        if(i*i==n&&j*j==x&&k*k==y)
            printf("%d\n",n);

    }
    return 0;

}
