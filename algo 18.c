#include<stdio.h>
void main()
{
    int n,num,maxx,i;

    printf("enter the number of input: ");
    scanf("%d",&n);

    printf("enter numbers one by one:\n");

    for(i=0;i<=n;i++)
    {
        scanf("%d",&num);
        if(i==1)
            maxx=num;

        if(num>maxx)
            maxx=num;
    }

    printf("highest number is %d",maxx);
}
