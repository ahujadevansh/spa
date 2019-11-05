#include<stdio.h>
int main()
{
    int n;
    void decbin(int);
    printf("enter the positive integer=");
    scanf("%d",&n);
    if(n<0)
        printf("invalid data");
    else
        decbin(n);
    return 0;
}

void decbin(int x)
{
    if(x>0)
    {
        decbin(x/2);
        printf("%d",x%2);
    }
}
