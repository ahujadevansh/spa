

#include<stdio.h>
void main()
{
    int a[100];
    int x,n,count=0,i,j,temp;


    printf("enter the number of elements=");
    scanf("%d",&n);

    if(n<0||n>100)
        printf("invalid data");
    else
    {
        printf("enter elements one by one=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);


    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

    }

        printf("the elments in acending order=\t");
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);
    }


}
