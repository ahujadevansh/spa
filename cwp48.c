#include<stdio.h>
int main()
{   int i,x,y,z,w;
    for(i=100;i<1000;i++)
    {
        x=i/100;
        w=i%100;
        y=w/10;
        z=w%10;
        if(x*x*x+y*y*y+z*z*z==i)
            printf("%d\n",i);

    }
    return 0;
}
