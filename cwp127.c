#include<stdio.h>
int main()
{
    int a[10][10];
    int maxx,i,j,n,m,temp;
    printf("enter order of matrix:");
    scanf("%d %d",&m,&n);
    printf("enter the elements one by one:\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);

    printf("original matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

    maxx=(m>n)?m:n;


    for(i=0;i<maxx;i++)
    for(j=0;j<maxx;j++)
        if(i<j)
            {
             temp=a[i][j];
             a[i][j]=a[j][i];
             a[j][i]=temp;
            }


    printf("transpose array is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

    return 0;
}

