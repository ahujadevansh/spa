#include<stdio.h>
void main()
{
    int i,j,k,l;

    for(i=1;i<=5;i++)
    {
        for(k=1;k<=10-2*i;k++)
            printf(" ");

        for(j=1;j<=2*i-1;j++)
            printf(" *");

        printf("\n");
    }

}
