#include<stdio.h>
void main()
{
    int i,flag=1,n;

    printf("enter the number: ");
    scanf("%d",&n);
    if(n==1)
        printf("%d is niether prime nor composite",n);
    else
    {
        if(n==2)
            flag=0;
        else
        {
            for(i=2;i<n;i++)
                if(n%i==0)
                flag=0;
        }

        if(flag==0)
            printf("%d is not a prime number",n);
        else
            printf("%d is a prime number",n);

    }
}
