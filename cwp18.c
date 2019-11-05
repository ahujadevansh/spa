#include<stdio.h>
#include<conio.h>
int main ()
{
    int n;
    //clrscr();
    abc:printf("enter a positive integer=\n");
    scanf("%d",&n);
    if(n<=0)
    {

        printf("invalid data");
        goto abc;
    }
    else
        if(n%7==0)
          printf("%d is divisible by 7\n",n);
        else
            printf("%d is not divisible by 7\n",n);
    getch();
    return 0;


}
