#include<stdio.h>
int main()
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
            count++;
        }
    }
    if(count==0)
        printf("%d is not present",x);
    else
        printf("%d is present %d times",x,count);


    return 0;
}
