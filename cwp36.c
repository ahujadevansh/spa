#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    float sum;
    //clrscr();
    printf("enter the no of terms=");
    scanf("%d",&n);
    sum=0;
    if(n<=0)
        printf("invalid data");
    else
    {

     for (i=1;i<=n;i++)
         sum=sum+(float)(2*i-1)/(2*i);
     printf("sum =%f",sum);
    }
    getch();
    return 0;

}
