#include<stdio.h>
#include<conio.h>


void main()
{
    int a,b,i,j,k;

    a=b=65;

    for(i=1;i<=5;i++)
    {
        for(k=1;k<=10-2*i;k++)
            printf(" ");

        for(j=a;j>=b;j--)
            printf(" %c",j);

        printf("\n");
        a=a+i+1;
        b=b+i;
    }
}
