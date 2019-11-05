#include<stdio.h>
#include<conio.h>


struct date
{
    int dd,mm,yy;
};

void main()
{
    struct date d1,d2;

    printf("enter todays date(dd/mm/yyyy): ");
    scanf("%d %d %d",&d1.dd,&d1.mm,&d1.yy);

    printf("enter another date date(dd/mm/yyyy): ");
    scanf("%d %d %d",&d2.dd,&d2.mm,&d2.yy);

    if(d2.yy>d1.yy)
        printf("%d/%d/%d yet to come",d2.dd,d2.mm,d2.yy);
    else if(d2.yy<d1.yy)
            printf("%d/%d/%d already passed",d2.dd,d2.mm,d2.yy);
         else
            if(d2.mm>d1.mm)
                printf("%d/%d/%d yet to come",d2.dd,d2.mm,d2.yy);
            else if(d2.mm<d1.mm)
                    printf("%d/%d/%d already passed",d2.dd,d2.mm,d2.yy);
                 else
                    if(d2.dd>d1.dd)
                        printf("%d/%d/%d yet to come",d2.dd,d2.mm,d2.yy);
                    else if(d2.dd<d1.dd)
                            printf("%d/%d/%d already passed",d2.dd,d2.mm,d2.yy);
                         else
                             printf("%d/%d/%d is todays date",d2.dd,d2.mm,d2.yy);


}
