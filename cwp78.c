#include<stdio.h>
int main()
{
    int x,y;
    char option;
    printf("+.addtion\n-.subtraction\n*.multiplication\n/.division\nQ,q.quit\n");
    do
    {
        printf("enter option=");
        scanf("%c",&option);
        if(option=='+'||option=='-'||option=='*'||option=='/')
       {

        printf("enter the numbers=");
        scanf("%d %d",&x,&y);
       }
        switch(option)
        {
            case '+':printf("addtion=%d\n",x+y);break;
            case '-':printf("subtraction=%d\n",x-y);break;
            case '*':printf("multiplication=%d\n",x*y);break;
            case '/':printf("division=%f\n",(float)x/y);break;
            case 'q':
            case 'Q':break;
            default:printf("invalid option\n");
        }
    }
    while(option!='q'&&option!='Q');
    return 0;
}

