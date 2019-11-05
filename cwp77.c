#include<stdio.h>
int main()
{
    int option,x,y;
    printf("1.addtion\n2.subtraction\n3.multiplication\n4.division\n5.quit\n");
    do
    {
        printf("enter option=");
        scanf("%d",&option);
        if(option<=4)
       {

        printf("enter the numbers=");
        scanf("%d %d",&x,&y);
       }
        switch(option)
        {
            case 1:printf("addtion=%d\n",x+y);break;
            case 2:printf("subtraction=%d\n",x-y);break;
            case 3:printf("multiplication=%d\n",x*y);break;
            case 4:printf("division=%f\n",(float)x/y);break;
            case 5:break;
            default:printf("invalid option");
        }
    }
    while(option!=5);
    return 0;
}
