#include<stdio.h>
int main()
{
    int n,sump=0,sumn=0,countp=0,countn=0;
    printf("enter numbers one by one=");
    do
    {
        scanf("%d",&n);
        if(n>0)
        {
            sump=sump+n;
            countp++;
        }
        else
            if(n<0)
        {
            sumn=sumn+n;
            countn++;
        }

    }
    while(n!=0);
    printf("no of positive integers=%d\n",countp);
    printf("no of negative integers=%d\n",countn);
    printf("sum of positive integers=%d\n",sump);
    printf("sum of negative integers=%d\n",sumn);
    return 0;
}
