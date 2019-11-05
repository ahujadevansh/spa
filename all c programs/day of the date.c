#include<stdio.h>

void main()
{
    int f,k,m,d,c,mm,yy;
    int mmm[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    printf("enter date in dd mm yyyy format: ");
    scanf("%02d %02d %02d %02d",&k,&m,&c,&d);

    yy=c*100+d;

    if(mm==2&&yy%4==0&&(yy%400==0||yy%100!=0))
        mmm[m]=29;

    /*printf("%d\n",k);
    printf("%d\n",m);
    printf("%d\n",c);
    printf("%d\n",d);*/

    if(k<=0||k>mmm[m]||m<1||m>12)
        printf("invalid data");
    else
    {
        mm=m;
        if(m>=3&&m<=12)
            m=m-2;
        else
            m=m+10;

        //f=k+((13*m-1)/5)+d+(d/4)+(c/4)-(2*c);
        f = (k+(((13*m)-1)/5)+d+(d/4)+(c/4))-(2*c);

        //printf("%d\n",f);

        if(f>=7)
            while(f>=7)
            f=f%7;
        else
            if(f<0)
             while(f<0)
                f=f+7;

        //printf("%d\n",f);


        //printf("%d",yy);
        if((mm==2||mm==1)&&yy%4==0&&(yy%400==0||yy%100!=0))
            f=f-2;
        else
            if(mm==1||mm==2)
                f=f-1;

        //printf("%d\n",f);





        switch(f)
        {
            case 0:printf("\n\n%02d/%02d/%02d%02d is Sunday.    \n\n",k,mm,c,d);break;
            case 1:printf("\n\n%02d/%02d/%02d%02d is Monday.    \n\n",k,mm,c,d);break;
            case 2:printf("\n\n%02d/%02d/%02d%02d is Tuesday.   \n\n",k,mm,c,d);break;
            case 3:printf("\n\n%02d/%02d/%02d%02d is Wednesday. \n\n",k,mm,c,d);break;
            case 4:printf("\n\n%02d/%02d/%02d%02d is Thursday.  \n\n",k,mm,c,d);break;
            case 5:printf("\n\n%02d/%02d/%02d%02d is Friday.    \n\n",k,mm,c,d);break;
            case 6:printf("\n\n%02d/%02d/%02d%02d is Saturday.  \n\n",k,mm,c,d);break;
        }
    }


}
