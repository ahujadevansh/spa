#include<stdio.h>
#include<string.h>
void main()
{
    int s[100],n,i,x,count;
    int search(int [],int,int);

    printf("enter no of elements: ");
    scanf("%d",&n);
    printf("enter elements one by one:\n");
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    printf("enter element to be searched: ");
    scanf("%d",&x);

    count=search(s,n,x);
    if (count==0)
        printf("%d is not present",x);
    else
        printf("%d is present %d times",x,count);
}

int  search(int s[],int n,int x)
{
    int i,count=0;
    for(i=0;i<n;i++)
        if(s[i]==x)
            count++;
    return count;
}
