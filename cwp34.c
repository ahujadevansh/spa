#include<stdio.h>
int main ()
{
    int n,i=1,sum=0,count;
    printf("enter one positive integer=");
    scanf("%d",&n);
    if(n<=0)
        printf("invalid data");
    else{
         for(count=1;count<=n;count++)
            {
                sum=sum+i;
                i=i+2;
            }
         printf("sum of all the first %d odd numbers=%d",n,sum);

        }
    return 0;
}

