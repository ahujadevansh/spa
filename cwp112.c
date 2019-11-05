#include<stdio.h>
void main()
{
    int dd,mm,yy,sum=0,i;
    int year[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    printf("enter date (dd/mm/yyyy)=");
    scanf("%d %d %d",&dd,&mm,&yy);

    for(i=1;i<=mm-1;i++)
    sum=sum+year[i];

    sum=sum+dd;
    if(mm>2)
    {

        if(yy%400==0||yy%4==0&&yy%100!=0);
        {
            sum=sum+1;
        }
    }

        printf("it is day number %d of the year",sum);
}
