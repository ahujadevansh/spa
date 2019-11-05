#include<stdio.h>
#include<conio.h>
int main()
{
    //clrscr();
    int x,y;
    printf("enter two integers:");
    scanf("%d %d",&x,&y);
    printf("%d+%d=%d\n",x,y,x+y);
    printf("%d-%d=%d\n",x,y,x-y);
    printf("%d*%d=%d\n",x,y,x*y);
    printf("%d/%d=%d\n",x,y,x/y);
    getch();
    return 0;
}
