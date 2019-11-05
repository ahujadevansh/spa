#include<stdio.h>
void main()
{
    int i,j,k,l;

    for(i=1;i<=6;i++)
    {
        for(k=1;k<=12-2*i;k++)
            printf(" ");

        for(j=i;j<=2*i-1;j++)
            printf(" %d",j%10);

        for(l=j-2;l>=i;l--)
            printf(" %d",l%10);

        printf("\n");
    }

}


