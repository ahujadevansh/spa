#include<stdio.h>
int main()
{
    int i,n,flag;
    printf("enter the number=");
    scanf("%d",&n);
    if(n<=0)
        printf("invalid data");
    else
    {
        flag=1;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                flag=0;
        }
        if(flag==1)
        printf("%d is prime",n);
        else
            printf("%d is not prime",n);
    }
    return 0;
}
