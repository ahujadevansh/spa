#include<stdio.h>
#include<conio.h>
int main()
{
    int digit;
    //clrscr();
    printf("enter a one digit number=");
    scanf("%d",&digit);
    switch(digit)
    {
        case 2:
        case 3:
        case 6:
        case 7:printf("welcome\n");
            break;
        case 1:
        case 4:
        case 5:
        case 8:printf("hello\n");
            break;
        case 0:
        case 9:printf("hi");
               break;
        default :printf("get out\n");
    }
    getch();
    return 0;
}
