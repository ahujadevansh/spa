#include<stdio.h>
void main()
{
    int a[100];
    int n,i,maxx,low;


    printf("enter the number of elements=");
    scanf("%d",&n);

    if(n<0||n>100)
        printf("invalid data");
    else
    {
    printf("enter elements one by one=");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    maxx=a[0];
    low=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>maxx)
            maxx=a[i];
        if(a[i]<low)
            low=a[i];
    }

    printf("highest=%d\n",maxx);
    printf("lowest=%d\n",low);
    }
}


