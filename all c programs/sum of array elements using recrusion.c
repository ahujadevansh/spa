#include<stdio.h>

void main()
{
    void sum_array(int [],int);
    int a[100];
    int n,i;

    printf("enter no of elements(not more than 100): ");
    scanf("%d",&n);

    printf("array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    sum_array(a,n-1);

}

void sum_array(int a [],int n)
{
    int static sum=0;
    if(n>=0)
    {
        sum=sum+a[n];
        //printf("\n%d\t%d\n",sum,a[n]);
        sum_array(a,n-1);
    }
    else
        printf("sum of array elements:%d",sum);
}
