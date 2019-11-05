#include<stdio.h>
void main()
{
    int num,n=0,i;
    int a[100];

    printf("enter the number: ");
    scanf("%d",&num);

    /*while(num!=0)
    {
        a[n]=num%2;
        num=num/2;
        n++;
    }*/

    for(i=0;num!=0;i++)
    {
        a[i]=num%2;
        num=num/2;
        n++;
    }

    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
