#include<stdio.h>
int main()
{
    int n;
    void reverse(int);
    printf("enter the positive integer=");
    scanf("%d",&n);
    if(n<0)
        printf("invalid data");
    else
        reverse(n);
    return 0;
}


void reverse(int x)
{
    if(x>0)
    {
        printf("%d",x%10);
        reverse (x/10);
    }
}
