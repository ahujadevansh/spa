#include<stdio.h>
int main()
{
    int n;
    void octbin(int);
    printf("enter the positive integer=");
    scanf("%d",&n);
    if(n<0)
        printf("invalid data");
    else
        octbin(n);
    return 0;
}


void octbin(int x)
{
    if(x>0)
    {
        octbin(x/8);
        printf("%d",x%8);
    }
}
