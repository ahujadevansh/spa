#include<stdio.h>
#include<conio.h>
int main()
{
    //clrscr();
    int x,y,a,s,m,d;
    printf("enter tow numbers");
    scanf("%d %d",&x,&y);
    a=x+y;
    s=x-y;
    m=x*y;
    d=x/y;
    printf("addition=%d\n",a);
    printf("subtraction=%d\n",s);
    printf("multiplication=%d\n",m);
    printf("division=%d\n",d);
    getch();
    return 0;
}

