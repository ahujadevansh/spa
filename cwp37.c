#include<stdio.h>
int main ()
{
    int n,i,fact=1;
    printf("enter one positive integer=");
    scanf("%d",&n);
    if(n<=0)
        printf("invalid data");
    else{
         for(i=1;i<=n;i++)
            fact=fact*i;
         printf("factorial of %d=%d",n,fact);

        }
    return 0;
}

