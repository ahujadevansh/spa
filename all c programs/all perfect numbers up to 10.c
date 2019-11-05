#include<stdio.h>
void main()
{
    void perfect(int);
    int n,i;

    printf("enter the number: ");
    scanf("%d",&n);

    printf("following are the perfect numbers up to %d:\n",n);

    for(i=1;i<=n;i++)
        perfect(i);
}

void perfect(int n)
{
    int i,sum=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }

    if(sum==n)
        printf("%d  ",n);

}
