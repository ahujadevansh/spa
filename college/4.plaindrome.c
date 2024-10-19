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
    if(x==reverse)
    printf("%d is plain drome",x);
    else
        printf("%d is plain drome",x);
}

