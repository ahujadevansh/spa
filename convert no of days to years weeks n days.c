#include<stdio.h>
int main()
{
    int i,n,year=0,week=0,day=0,x;

    printf("enter no of days=");
    scanf("%d",&n);
    x=n;

    for(i=1;i<=x;i++)
    {
        if(n>=365)
        {
            year=year+1;
            n=n-365;
        }
        else if(n>=7)
            {
                week=week+1;
                n=n-7;
            }
            else
                {
                    day=day+1;
                    n=n-1;
                }
        if(n==0)
            break;

    }



        printf("%d days= %d years,%d weeks,%d days\n",x,year,week,day);

    /*return 0;
 }




 {
    int n,year=0,week=0,day=0;

    printf("enter no of days=");
    scanf("%d",&n);
*/n=x;
    year=n/365;
    week=(n%365)/7;
    day=(n%365)%7;
    printf("%d days= %d years,%d weeks,%d days",n,year,week,day);
    return 0;
 }

