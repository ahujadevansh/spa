#include<stdio.h>
#include<conio.h>
int main()
{
    int x=0,y=1,z=20;
    //clrscr();
    printf("%d %d %d %d %d\n",++x,x++,x--,++x,--x);
    printf("%d %d %d\n",++y,y++,y);
    printf("%d %d %d %d %d\n",z,--z,z++,++z,z--);
    getch();
    return 0;
}
