#include<stdio.h>
void main()
{
    int i,j,k,m;

    for(i=1;i<=5;i++)
    {

        for(j=1;j<=6-i;j++)
            printf(" *");


        for(k=1;k<=4*i-6;k++)
            printf(" ");

            if(i==1)
                m=4;
            else
                m=6-i;

        for(j=m;j>=1;j--)
            printf(" *");
            printf("\n");
    }


}
