#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,n,temp;
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
        if(i<j)
            {
             temp=a[i][j];
             a[i][j]=a[j][i];
             a[j][i]=temp;
            }

    printf("transpose array is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }


}
