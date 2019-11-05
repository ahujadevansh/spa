#include<stdio.h>
void main()
{
    int a[100];
    int x,n,count=0,i;


    printf("enter the number of elements=");
    scanf("%d",&n);
    printf("enter elements one by one=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("enter the integer to be find out=");
    scanf("%d",&x);


    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("%d is present at position %d\n",x,i);
            count++;
        }

    }

        if(count==0)
            printf("%d is not present",x);
}
