#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,m,n,sumr=0,sumc=0,sumt=0;
    printf("enter order of matrix:");
    scanf("%d %d",&m,&n);
    printf("enter the elements one by one:\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);

    for(i=0;i<m;i++)
    {
        sumr=0;
            for(j=0;j<n;j++)
        {
            sumr=sumr+a[i][j];
        }
            for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
            printf("%d\n",sumr);
    }


    for(j=0;j<n;j++)
    {
        sumc=0;
        for(i=0;i<m;i++)
            sumc=sumc+a[i][j];
        sumt=sumt+sumc;
        printf("%d\t",sumc);
    }
    printf("%d",sumt);

    return 0;
}
