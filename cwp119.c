#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,n,sum1=0,sum2=0,sum3=0,n1;
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
        if(i<j)
            sum2=sum2+a[i][j];
        if(i>j)
        sum3=sum3+a[i][j];

    }
    n1=(n*n-n)/2;
    printf("\nsum & average of first diagonal=%d %f\n",sum1,(float)sum1/n);
    printf("\nsum & average of upper triangular=%d %f\n",sum2,(float)sum2/n1);

    printf("\nsum & average of lower triangular=%d %f\n",sum3,(float)sum3/n1);

    return 0;
}

