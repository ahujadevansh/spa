#include<stdio.h>
void main()
{

    int i=1,j=1,a,b=0,x;
    printf("enter number: ");
    scanf("%d",&x);

/*while(j!=x)
{
        b=b+i;
        for(;j<=b;j++)
        {
            printf(" %d",j);
            if(j==x)
                break;
        }

        printf("\n");
        i++;
}*/

    a=1;
    b=1;
    for(i=1;j!=x;i++)
    {
        for(j=a;j<=b;j++)
        {
            printf(" %d",j);
            if(j==x)
                break;
        }
        a=a+i;
        b=b+i+1;

        printf("\n");

    }




}
