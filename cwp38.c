#include<stdio.h>
int main()
{
    int i,n1,n2,min,gcd=1,lcm;
    printf("enter two numbers");
    scanf("%d %d",&n1,&n2);
    if(n1<n2)
        min=n1;
    else
        min=n2;
    for(i=1;i<=min;i++)
    {
        if(n1%i==0&&n2%i==0)
            gcd=i;
    }
    lcm=(n1*n2)/gcd;
    printf("GCD & LCM of %d & %d = %d & %d",n1,n2,gcd,lcm);
    return 0;
}
