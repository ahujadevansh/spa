#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,maxx;
    //clrscr();
    printf("enter three integer=\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d,",a);
    printf("%d,",b);
    printf("%d\n",c);
    maxx=(a>b&&a>c)?a:(b>c)?b:c;
    printf("%d is highest",maxx);
    getch();
    return 0;


}

