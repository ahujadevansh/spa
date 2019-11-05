// add given two heights

#include<stdio.h>
#include<conio.h>

struct height
{
    int f,in;
};
void main()
{
    struct height a,b,c;

    printf("enter height of first person:");
    scanf("%d %d",&a.f,&a.in);

    printf("enter height of second person:");
    scanf("%d %d",&b.f,&b.in);

    c.f=a.f+b.f;
    c.in=a.in+b.in;

    if(c.in>12)
    {
        c.in=c.in-12;
        c.f++;
    }

    printf("addition of height: %dfeets %dinches",c.f,c.in);
}
