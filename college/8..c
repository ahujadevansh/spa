#include<stdio.h>
void main()
{
    int option,x,y;

    printf("1.add\n2.division\n3.subtract\n4.multiply\n\n");
    scanf("%d",&option);

    if(option>=1&&option<=4)
    {
        printf("enter two numbers: ");
        scanf("%d %d",&x,&y);

        switch(option)
        {
            case 1: printf("%d + %d=%d",x,y,x+y);break;
            case 2: printf("%d / %d=%f",x,y,(float)x/y);break;
            case 3: printf("%d - %d=%d",x,y,x-y);break;
            case 4: printf("%d * %d=%d",x,y,x*y);break;
        }
    }
    else
        printf("invalid option");
}
