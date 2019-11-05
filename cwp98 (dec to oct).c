#include<stdio.h>
int main()
{
    int n;
    void decoct(int);
    printf("enter the positive integer=");
    scanf("%d",&n);
    if(n<0)
        printf("invalid data");
    else
        decoct(n);
    return 0;
}


void decoct(int x)
{
    if(x>0)
    {
        decoct(x/8);
        printf("%d",x%8);
    }
}
