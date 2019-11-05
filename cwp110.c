#include<stdio.h>
#include<math.h>
void main()
{
    float a[50];
    int n,i;
    float mean=0,variance=0;


    printf("enter the number of elements=");
    scanf("%d",&n);

    if(n<0||n>100)
        printf("invalid data");
    else
    {


    printf("enter elements one by one=");
    for(i=0;i<n;i++)
        scanf("%f",&a[i]);

    for(i=0;i<n;i++)
    {
        mean=mean+a[i];
    }

    mean=mean/n;
    for(i=0;i<n;i++)
    {
        variance=variance+(a[i]-mean)*(a[i]-mean);
    }

    variance=variance/n;

    printf("mean=%f\nvariance=%f\nstandard deviation=%f\n",mean,variance,sqrt(variance));

    }
}


