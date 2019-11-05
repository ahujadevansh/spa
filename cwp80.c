#include<stdio.h>
int main()
{
    int n,i=1;
    float fact=1;
    printf("enter the number=");
    scanf("%d",&n);
    if(n<=0)
        printf("invalid data");
    else
    {
     ad:fact=fact*i;
        i++;
        if(i<=n)
           goto ad;
        printf("factorial of a number=%.2f",fact);

    }
    return 0;
}

