#include<stdio.h>
int main()
{
    int n;
    int digit(int);
    printf("enter n=");
    scanf("%d",&n);
    if(n<=0)
        printf("invalid data");
    else
    {
      printf("sum=%d",sum(n));
    }
    return 0;
}
int sum(int x)
{
    if(x==0)
        return 0;
    else
        return (x%10)+sum(x/10);

}


