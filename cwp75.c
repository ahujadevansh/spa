#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter the number=");
    scanf("%d",&n);
    if(n<0)
        printf("invalid data");
    else
    {
        printf("all the intermidiate value:\n");
        while(n!=1)
        {
            printf("%d\n",n);
            if(n%2==0)
            {

                    n=n/2;
            }
            else
            {
                n=n*3+1;
            }

            count++;

        }

        printf("1\nno of iterations requried :%d",count);

    }
    return 0;

}
