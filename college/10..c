#include<stdio.h>

void main()
{
    int i,n,flag=1,j,count=0;

    printf("enter number: ");
    scanf("%d",&n);

    printf("folliwing are the first %d prime numbers:\n",n);



    for(i=2;i<=n*n;i++)
    {
        flag=1;
        if(i==2)
            flag=1;

        else
        for(j=2;j<i;j++)
            if(i%j==0)
            {
                flag=0;
                 break;
            }

        if(flag==1)
            printf("%d  ",i);
    }

}
