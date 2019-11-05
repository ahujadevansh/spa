#include<stdio.h>
int main()
{
    int n;
    void fun(int);
    printf("enter the positive integer=");
    scanf("%d",&n);
    if(n<0)
        printf("invalid data");
    else
        fun(n);
    return 0;
}
void fun(int x)
{
    printf("%d\n",x);
    if(x>1)
    {

        if(x%2==0)
        {
            fun(x/2);
        }
        else
        {
            fun((x*3)+1);
        }
    }
}
