#include<stdio.h>
int main()
{
    char option;
    int x,y;
    printf("enter option (+,-,*,/)=");
    scanf("%c",&option);
    printf("enter two numbers=");
    scanf("%d %d",&x,&y);
    switch(option)
    {
        case('+'):printf("%d+%d=%d",x,y,x+y);break;
        case('-'):printf("%d-%d=%d",x,y,x-y);break;
        case('*'):printf("%d*%d=%d",x,y,x*y);break;
        case('/'):printf("%d/%d=%d",x,y,x/y);break;
        default:printf("invalid option");

    }
    return 0;
}
