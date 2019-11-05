#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    //clrscr();
    printf("enter three integer=\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d,",a);
    printf("%d,",b);
    printf("%d\n",c);
    if (a>b&&a>c)
        printf("%d is highest",a);
    else
        if(b>c)
          printf("%d is highest",b);
        else
            printf("%d is highest",c);
    getch();
    return 0;


}

