#include<stdio.h>
int main()
{
    int i,j;
    int a[5]={10,20,30,40,50};
    float b[3][4]={{1.1,2.2,3.3,4.4},{5.5,6.6,7.7,8.8},
                    {9.9,2.1,3.1,4.1}
                   };

    int *p[5];
    float *q[3][4];


    for(i=0;i<5;i++)
        p[i]=&a[i];

    for(i=0;i<3;i++)
    for(j=0;j<4;j++)
        q[i][j]=&b[i][j];

    for(i=0;i<5;i++)
        printf("%d\t",*p[i]);

        printf("\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            printf("%f\t",*q[i][j]);
        printf("\n");
    }

    return 0;
}
