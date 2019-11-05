#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a,e=5,p;

    for(i=1;i<=5;i++)
    {
        printf("%3d",i);
        p=i;
        a=4;
        for(j=1;j<i;j++)
        {
            p=p+a;
            printf("%3d",p);
            a--;

        }


        e--;
        printf("\n");
    }
    getch();
}
