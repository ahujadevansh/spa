#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d;

    printf("enter a,b,c (ax^2+bx+c): ");
    scanf("%f %f %f",&a,&b,&c);

    d=(b*b)-(4*a*c);

    if(d<=0)
    {
        //printf("roots are not real");
        d=sqrt(-d);

        printf("root 1= %f+i*%f\n",-b/(2*a),d/(2*a));

        printf("root 1= %f-i*%f\n",-b/(2*a),d/(2*a));
    }
    else
        if(d==0)
            printf("root is %f",(-b)/(2*a));
        else

            if(a==0)
                printf("root =%f",-c/b);
            else
            {
                d=sqrt(d);
                printf("root 1=%f\n",(-b+d)/(2*a));
                printf("root 2=%f",(-b-d)/(2*a));
            }


}
