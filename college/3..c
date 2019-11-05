#include<stdio.h>
void main()
{
    int n,reverse=0,i,rem,x;

    printf("enter the number: ");
    scanf("%d",&n);

    x=n;

    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }


    printf("reverse of %d is %d",x,reverse);
}

