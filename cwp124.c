#include<stdio.h>
int main()
{
    int a[10][10],b[10][10];
    int i,j,n;
    printf("enter order of matrix:");
    scanf("%d",&n);
    printf("enter the elements one by one:\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);

    printf("original matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }


    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    b[j][i]=a[i][j];


    printf("transpose array is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }

    return 0;
}
