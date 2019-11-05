#include<stdio.h>
int main ()
{
    int n,i,sp=0,sn=0,ap,an,x,c0=0,cp=0,cn=0;

    printf("enter how many numbers =");
    scanf("%d",&n);
    if(n<=0)
        printf("invalid data");
    else
    {
        printf("enter the numbers");
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x);
            if(x==0)
                c0++;
            else
                if(x>0)
                {
                    cp++;
                    sp=sp+x;
                }
                else
                {
                    cn++;
                    sn=sn+x;
                }
        }
        printf("number of zeros=%d\n",c0);
        printf("number of positive integers=%d\n",cp);
        printf("sum of positive integers=%d\n",sp);
        printf("average of positive integers=%f\n",(float)sp/cp);
        printf("number of negative integers=%d\n",cn);
        printf("sum of negative integers=%d\n",sn);
        printf("average of negative integers=%f\n",(float)sn/cn);
    }
    return 0;
}
