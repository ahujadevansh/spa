#include<stdio.h>
int main()
{
    int n;
    int sum(int);
    printf("enter n=");
    scanf("%d",&n);
    if(n<=0)
        printf("invalid data");
    else
    {
      printf("sum of numbers from 1 to %d =%d",n,sum(n));
    }
    return 0;
}
int sum(int x)
{
    if(x==0)
        return 0;
    else
        return x+sum(x-1);

}

