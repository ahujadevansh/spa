#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,n,x,y,temp;
    printf("enter the order of matrix");
    scanf("%d",&n);

    printf("enter elements one by one=\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);

    printf("orignal matrix:\n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                printf("%d\t",a[i][j]);
            printf("\n");
        }
    printf("enter column to be exchanged:");
    scanf("%d %d",&x,&y);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        temp=a[i][x];
        a[i][x]=a[i][y];
        a[i][y]=temp;
    }

    printf("transformed array:\n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                printf("%d\t",a[i][j]);
            printf("\n");
        }
    return 0;
}


