#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,x=0,digit;
    printf("enter the number=");
    scanf("%d",&n);
    if(n<0)
        printf("invalid data");
    else
    {
        while(n!=0)
        {
            digit=n%10;
            n=n/10;
            x=x*10+digit;
        }
        while(x!=0)
        {
        digit=x%10;
        x=x/10;
        switch(digit)
        {
        case 0:printf("zero ");break;
        case 1:printf("one ");break;
        case 2:printf("two ");break;
        case 3:printf("three ");break;
        case 4:printf("four ");break;
        case 5:printf("five ");break;
        case 6:printf("six ");break;
        case 7:printf("seven ");break;
        case 8:printf("eight ");break;
        case 9:printf("nine ");break;
        }
        }
    }

    getch();
    return 0;

}
