#include<stdio.h>
int main()
{
    int n,sum,p;
    float b;
    char gender;

    printf("enter gender=");
    scanf("%c",&gender);


    printf("enter salary=");
    scanf("%d",&n);

    if(gender=='F'||gender=='f')
    {
        p=10;
        if(n<10000)
            p=p+2;

    }
    else
    {
        p=5;
        if(n<10000)
            p=p+2;
    }

    b=(float)n*p/100;
    printf(" bonus=%f\n salary=%f",b,(float)n+b);


}
