#include<stdio.h>
void main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        for(k=1;k<=10-2*i;k++)
            printf(" ");

        for(j=i;j<=2*i-1;j++)
            printf(" %d",j);
        printf("\n");
    }

}
