#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],d[10][10];
    int i,j,m1,n1,m2,n2;
    printf("enter the order of first matrix");
    scanf("%d %d",&m1,&n1);
    printf("enter the order of second matrix");
    scanf("%d %d",&m2,&n2);

    if(m1!=m2||n1!=n2)
        printf("order mis match");
    else
    {
        printf("enter elements of first matrix:\n");
        for(i=0;i<n1;i++)
        for(j=0;j<m1;j++)
        scanf("%d",&a[i][j]);
        printf("enter elements of second matrix:\n");
        for(i=0;i<m2;i++)
        for(j=0;j<n2;j++)
            scanf("%d",&b[i][j]);

        for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];
        }

        printf("addtion matrix:\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                printf("%d\t",c[i][j]);
            printf("\n");
        }
        printf("subtraction matrix:\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                printf("%d\t",d[i][j]);
            printf("\n");
        }

    }
    return 0;
}
