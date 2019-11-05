#include<stdio.h>
#include<conio.h>
int main()
{
    int n,x,y;
    //clrscr();
  ad:printf("enter a two digit positive integer=");
    scanf("%d",&n);
    if(n<10||n>99)
    {
        printf("invalid data\n");
        goto ad;
    }
    else
    {
        x=n/10;
        y=n%10;
        printf("sum of digits is=%d\n",x+y);
        printf("product of digits is=%d\n",x*y);
        printf("reverse of digit is=%d\n",y*10+x);
    }
    getch();
    return 0;
}
