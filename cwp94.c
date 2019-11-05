#include<stdio.h>
int main()
{
    int m,n;
    int gcd(int,int);
    printf("enter two numbers=\n");
    scanf("%d %d",&m,&n);
    if(m<0||n<0)
        printf("invalid data");
    else
    printf("GCD of %d & %d =%d",m,n,gcd(m,n));
    return 0;
}
int gcd(int m,int n)
{
    if(m<n)
        return gcd(n,m);
    else
        if(n==0)
            return m;
        else
            return gcd(n,m%n);

}



