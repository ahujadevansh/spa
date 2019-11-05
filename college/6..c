#include<stdio.h>
void main()
{
    int x,y,z,maxx;

    printf("enter the number: ");
    scanf("%d %d %d",&x,&y,&z);

    maxx=(x>y && x>z)?x:(y>z)?y:z;

    printf("highest=%d",maxx);
}
