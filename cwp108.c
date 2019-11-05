#include<stdio.h>
void main()
{
    int a[100];
    int temp,n,i;


    printf("enter the number of elements=");
    scanf("%d",&n);

    if(n<0||n>100)
        printf("invalid data");
    else
    {


    printf("enter elements one by one=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }

    printf("modified array=\t");
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);


    }
}

