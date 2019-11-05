#include<stdio.h>
int main()
{
    int n,x,y;
    printf("enter a positive integer=\n");
    scanf("%d",&n);
    if(n<=0)
        printf("invalid data\n");
    else
        x=n%5;
        y=n%7;
        if(x==0&&y==0)
            printf("%d is divisible by 5 & 7\n",n);
        else if(x==0&&y!=0)
                printf("%d is divisible by 5\n",n);
             else if(y==0&&x!=0)
                    printf("%d is divisible bu 7\n",n);
                  else
                    printf("%d is niether divisible by 5 nor by 7\n",n);
return 0;
}
