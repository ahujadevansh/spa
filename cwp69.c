#include<stdio.h>
void main()
{
    char i,j,m;
    int l=1,k;

    for(i='E';i>='A';i--)
    {

        for(j='A';j<=i;j++)
            printf(" %c",j);


        for(k=1;k<=4*l-6;k++)
            printf(" ");

            if(l==1)
                m='D';
            else
                m=i;


        for(j=m;j>='A';j--)
            printf(" %c",j);
            printf("\n");
            l++;
    }


}

