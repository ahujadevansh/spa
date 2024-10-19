#include<stdio.h>
void main()
{
    int n,i;

    printf("enter the number: ");
    scanf("%d",&n);

    if(n<=0)
    printf("invalid data\n");
    else
    {
        for(i=1;i<=12;i++)
            printf("%d * %d=%d\n",n,i,n*i);
    }


}
