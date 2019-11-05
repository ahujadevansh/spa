#include<stdio.h>
#include<conio.h>
int main()
{
    int n,age;
    float amount,p,r;
    char gender,member;
    printf("enter principal amount=\n");
    scanf("%f",&p);
    printf("enter period=\n");
    scanf("%d",&n);
    printf("enter age=\n");
    scanf("%d",&age);
    printf("enter gender(M/m/F/f)=\n");
    scanf("%c",&gender);
    printf("enter membership ststus(Y/y/N/n)=\n");
    scanf("%c",&member);
    if (n<=0||age<=0||p<=0)
        printf("invalid data\n");
    else if(member!='y'&&member!='Y'&&member!='N'&&member!='n')
            printf("invalid membership status\n");
        else if(gender!='M'&&gender!='m'&&gender!='F'&&gender!='f')
                 printf("invalid gender\n");
             else
              {
                    if(gender=='M'||gender=='m')
                      if (age<60)
                         if(member=='n'||member=='N')
                            r=9.25;
                         else
                             r=9.5;
                      else
                          if(member=='n'||member=='N')
                            r=9.75;
                          else
                             r=10.00;
                   else
                        if (age<60)
                         if(member=='n'||member=='N')
                            r=9.35;
                         else
                             r=9.6;
                      else
                          if(member=='n'||member=='N')
                            r=9.85;
                          else
                             r=10.10;
                amount=p+(p*n*r)/100;
                printf("final amount=%0.2f\n",amount);
              }
    getch();
    return 0;
}
