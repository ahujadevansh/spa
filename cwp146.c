#include<stdio.h>
int main()
{
    int a[100],n,x,ans,i;
    int search(int [],int,int);

    printf("enter no of elements: ");
    scanf("%d",&n);
    printf("enter elements one by one: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("enter element whose position to be found: ");
    scanf("%d",&x);

    ans=search(a,n,x);
    if(ans==-1)
        printf("%d is not present",x);

    else
        printf("%d is present at %d",x,ans);
}


int search(int s[],int n,int x)
{
    int i,ans=-1;
    for(i=0;i<n;i++)
        if(s[i]==x)
        {
            ans=i;
            break;
        }
    return ans;
}
