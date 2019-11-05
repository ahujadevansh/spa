#include<stdio.h>
void main()
{
    int i,x,y,z,w;

    printf("following are three digits armstrong number;\n");

    for(i=100;i<1000;i++)
    {
        z=i%10;
        w=i/10;
        y=w%10;
        x=w/10;

        if(x*x*x+y*y*y+z*z*z==i)
            printf("%d\n",i);
    }
}
