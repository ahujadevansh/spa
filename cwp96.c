#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int fibbo(int);
    printf("enter number=\n");
    scanf("%d",&i);
    if(i<0)
        printf("invalid data");
    else
    {
        printf("following are the first %d terms of fibbonasi series=\n");

        for(j=0;j<i;j++)
            {
                printf("%d\n",fibbo(j));
                sum=sum+fibbo(j);
            }
        printf("sum =%d",sum);
    }
    return 0;
}
int fibbo(int n)
{
    if(n==0)
        return 0;
    else
        if(n==1)
            return 1;
        else
            return fibbo(n-1)+fibbo(n-2);

}




