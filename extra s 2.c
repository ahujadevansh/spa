// add given two periods

#include<stdio.h>
#include<conio.h>

struct period
{
    int hr,m;
};
void main()
{
    struct period a,b,c;

    printf("enter period of first period:");
    scanf("%d %d",&a.hr,&a.m);

    printf("enter period of second period:");
    scanf("%d %d",&b.hr,&b.m);

    c.hr=a.hr+b.hr;
    c.m=a.m+b.m;

    if(c.m>60)
    {
        c.m=c.m-60;
        c.hr++;
    }

    printf("addition of period: %dhr %dmin",c.hr,c.m);
}

