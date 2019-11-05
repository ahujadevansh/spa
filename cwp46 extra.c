#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x,flag1=0,d1,d2,flag2=0,flag3=0;
    printf("enter the four digit number=");
    scanf("%d",&n);
    if(n<1000||n>9999)
        printf("invalid data");
    else
    {
        for(i=1;i<=n;i++)
        {
           if(i*i==n)
            flag1=1;
        }
        if(flag1==0)
            printf("entered number is not perfect square\n");
        else
        {
            d1=n/100;
            d2=n%100;
            //printf("%d\n%d\n",d1,d2);
            for(i=0;i<=n;i++)
            {
                if(i*i==d1)
                flag2=1;

            }
            for(i=0;i<=n;i++)
            {
                if(i*i==d2)
                flag3=1;
            }

          if(flag1==1&&flag2==1&&flag3==1)
          {
            printf("\nentered number is perfect square\n");
            printf("\nfirst two digits n last two digits are also perfect square\n");
          }
          else
          {
              printf("\nentered number is perfect square\n");
              printf("\nfirst two digits n last two digits are not perfect square\n");
          }


        }

    }
    return 0;
}
