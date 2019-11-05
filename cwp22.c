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
        w=n%100;
        y=w/10;
        z=w%10;
        if(x*x*x+y*y*y+z*z*z==n)
          printf("%d is armstrong number\n",n
                 );
        else
            printf("%d is not an armstrong number\n",n);
    }
    getch();
    return 0;
}

