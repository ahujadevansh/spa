#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,m1,m2,m3,m;
    int highest(int,int,int);
	//clrscr();
    printf("enter nine numbers=");
    scanf("%d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
    m1=highest(a,b,c);
    m2=highest(d,e,f);
    m3=highest(g,h,i);
    m=highest(m1,m2,m3);
    printf("highest=%d",m);
    getch();
    return 0;
}

int highest(int x,int y,int z)
{
    int maxx;
    maxx=(x>y&&x>z)?x:(y>z)?y:z;
    return maxx;

}
