#include<stdio.h>
#include<conio.h>
int main()
{
    int n,x,y,z,w;
    //clrscr();
 ad:printf("enter a three digit positive integer=");
    scanf("%d",&n);
    if(n<100||n>999)
    {
        printf("invalid data\n");
        goto ad;
    }
    else
    {
        x=n/100;
       // w=n%100;
        y=(n%100)/10;
        z=n%10;
        printf("sum of digits=%d\n",x+y+z);
        printf("product of digit=%d\n",x*y*z);
        printf("reverse of digitd=%d\n",z*100+y*10+x);
    }
    getch();
    return 0;
}
