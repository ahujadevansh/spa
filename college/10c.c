#include<stdio.h>
void main()
{
    int a[100],n,i,sum=0;
    int add(int [],int);

    printf("enter number of elements: ");
    scanf("%d",&n);

    printf("enter elements one by one:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    sum=add(a,n);

    printf("sum of elments is %d",sum);

}

int add(int *a,int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+a[i];

    return sum;
}
