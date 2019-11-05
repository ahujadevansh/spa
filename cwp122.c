#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,m1,m2,n1,n2;
    printf("order of first matrix=");
    scanf("%d %d",&m1,&n1);
    printf("order of second matrix=");
    scanf("%d %d",&m2,&n2);
    if(m2!=n1)
        printf("order mismatch :(");
    else
    {
        printf("enter elements of first matrix:\n");
        for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
        scanf("%d",&a[i][j]);

        printf("enter elements of second matrix:\n");
        for(i=0;i<m2;i++)
        for(j=0;j<n2;j++)
        scanf("%d",&b[i][j]);

        for(i=0;i<m1;i++)
        for(j=0;j<n2;j++)
        {
            c[i][j]=0;
            for(k=0;k<n1;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
        printf("multiplikation matrix is:\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)
                printf("%d\t",c[i][j]);
            printf("\n");
        }

    }

    return 0;
}



