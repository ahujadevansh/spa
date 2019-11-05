#include<stdio.h>
#include<conio.h>
int main()
{
    int x=3,y=4,z=5,a,b,c;
    //clrscr();
    a=x^y&z;
    b=x^y<<2;
    c=x+y&&z>>1;
    getch();
    return 0;
}
