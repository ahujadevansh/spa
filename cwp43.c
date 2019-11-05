#include<stdio.h>
int main()
{
    int n,i;
    float pa,r,term=1;
    printf("enter principal amount =\n");
    scanf("%f",&pa);
    printf("enter rate of interest=\n");
    scanf("%f",&r);
    printf("enter period =\n");
    scanf("%d",&n);
    if(pa<=0||r<=0||n<=0)
        printf(" invalid data");
    else
        for(i=1;i<=n;i++)
        term=term*(1+(r/100));
        printf("amount=%f",pa*term);
        return 0;
}
