#include<stdio.h>
int main()
{
    int a[100];
    int i,n,x,count=0,j;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter elements one by one:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element to be deleted:");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    if(a[i]==x)
    {
        for(j=i;j<n;j++)
            a[j]=a[j+1];
        n--;
        count++;
        i--;
    }
        if(count==0)
            printf("%d is not present",x);
        else
{
        printf("deletion done done:)\n\n");
        printf("modified array:\n");
        for(i=0;i<n;i++)
            printf("%d  ",a[i]);
}
    return 0;
}



