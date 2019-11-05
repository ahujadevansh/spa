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

        temp=a[n-1];
        for(i=n-1;i>=0;i--)
            a[i]=a[i-1];

        a[0]=temp;



    printf("rotated array=\t");
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);


    }
}

