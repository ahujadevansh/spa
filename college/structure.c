#include<stdio.h>
struct date
{
    int dd,mm,yy;
};
struct player
{
    char name[40],country[20];
    struct date d;
    int match;
    float avg;
};

void main()
{

    struct player s[10],temp;
    int i,j,n=2;

    for(i=0;i<n;i++)
    {
        printf("enter name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("date of birth: ");
        scanf("%d %d %d",&s[i].d.dd,&s[i].d.mm,&s[i].d.yy);
        printf("enter country name: ");
        fflush(stdin);
        gets(s[i].country);
        printf("enter no of matches played: ");
        scanf("%d",&s[i].match);
        printf("enter bating average: ");
        scanf("%f",&s[i].avg);

    }

     for (i=0;i<n-1;i++)
       {
            for(j=0;j<n-1-i;j++)
           if (s[j].avg < s[j+1].avg)
                {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                }
       }

     printf("name                                    date of birth country name        no of matches batting average\n");
     for(i=0;i<n;i++)
        printf("%-40s%2d/%2d/%-7d %-20s %13d%15f\n",s[i].name,s[i].d.dd,s[i].d.mm,s[i].d.yy,s[i].country,s[i].match,s[i].avg);
}
//%2d/%2d/%-7d %-20s %13d
//date of birth country name        no of matches
