#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    //clrscr();
    printf("enter coefficients of equation(ax^2+bx+c)=\n");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-(4*a*c);
    /*if (a==0)
        if(b==0) printf("invalid data");
        else
            printf("root =%f",-c/b);
    else*/
        if (d==0)
        printf("root=%f\n",-b/(2*a));
        else
        if(d>0)
        {
            printf("root 1=%f\n",(-b+sqrt(d))/(2*a));
            printf("root 2=%f\n",(-b-sqrt(d))/(2*a));
        }
        else
        {
            printf("root 1=%f+i*%f\n",(-b/(2*a)),(sqrt(-d)/(2*a)));
            printf("root 2=%f-i*%f\n",(-b/(2*a)),(sqrt(-d)/(2*a)));
        }
    getch();
    return 0;
}
