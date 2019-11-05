#include<stdio.h>
#include<conio.h>
int main()
{
    int x=5,y,z;
    //clrscr();
    y=z=x;
    y-=--x;
    z-=x--;
    x-=--x-x--;
    printf("%d %d %d",x,y,z);
    getch();
    return 0;
}
