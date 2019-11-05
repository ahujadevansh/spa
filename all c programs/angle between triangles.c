#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,A,B,C,pi;

    pi=180/3.141592654;

    printf("enter first side(a):");
    scanf("%f",&a);
    printf("enter second side(b):");
    scanf("%f",&b);
    printf("enter third side(c):");
    scanf("%f",&c);

    A=pi*(acos((b*b+c*c-a*a)/(2*b*c)));
    B=pi*(acos((a*a+c*c-b*b)/(2*a*c)));
    C=pi*(acos((a*a+b*b-c*c)/(2*a*b)));

    printf("angle between %f and %f=%.2f\n",b,c,A);
    printf("angle between %f and %f=%.2f\n",a,c,B);
    printf("angle between %f and %f=%.2f\n",a,b,C);
    getch();


}
