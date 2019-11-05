#include<stdio.h>
int main()
{
    int i;
    void armstrong(int);
    printf("following are the three digit armstrong numbers:");
    for(i=100;i<=999;i++)
        armstrong(i);
        return 0;
}

void armstrong(int n)
{
    int x,y,z,w;
    x=n/100;
    w=n%100;
    y=w/10;
    z=w%10;
    if(x*x*x+y*y*y+z*z*z==n)
        printf("\n%d",n);
}
