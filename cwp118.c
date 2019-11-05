#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,n,sum1=0,sum2=0;
    printf("enter the order of matrix");
    scanf("%d",&n);

    printf("enter elements one by one=\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);

    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        if(i==j)
            sum1=sum1+a[i][j];
        if(i+j==n-1)
            sum2=sum2+a[i][j];
    }
    printf("\nsum & average of first diagonal=%d %f\n",sum1,(float)sum1/n);
    printf("\nsum & average of second diagonal=%d %f\n",sum2,(float)sum2/n);

    return 0;
}

