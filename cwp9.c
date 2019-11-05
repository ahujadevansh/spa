#include<stdio.h>
#include<conio.h>
int main()
{
    int x=3,y=4,z,w;
    //clrscr();
    z=x++ + ++x + x++ + y-- + y++;
    printf("%d %d %d\n",x,y,z);
    w=x++ + ++x + --x + ++x + y++ + y++;
    printf("%d %d %d %d",x,y,z,w);
    getch();
    return 0;
}
