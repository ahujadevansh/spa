#include<stdio.h>
void main()
{
    int i,j,k;
    int c;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=10-2*i;k++)
            printf(" ");

        for(j=1;j<=i;j++)
            printf(" %d",j);

        for(c=65;c<64+i;c++)
            printf(" %c",c);
        printf("\n");
    }
}
