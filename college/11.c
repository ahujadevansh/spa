#include<stdio.h>
void main()
{
    int i,n;

    printf("enter n=");
    scanf("%d",&n);

    printf("folling are factors of %d:\n",n);

    for(i=1;i<=n;i++)
        if (n%i==0)
        printf("%d  ",i);
}
