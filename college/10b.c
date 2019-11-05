#include<stdio.h>
void main()
{
    int i=5,*p,**d;

    p=&i;
    d=&p;

    printf("\nvalue of i is %d\n",i);
    printf("\nvalue of i is %d\n",*p);
    printf("\nvalue of i is %d\n",**d);

}
