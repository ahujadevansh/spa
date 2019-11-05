#include<stdio.h>
int main()
{
    int n,digit,sum=0,product=1,reverse=0;
    printf("enter a positive integer=");
    scanf("%d",&n);
    if(n<=0)
	printf("invalid data");
    else
    {
	while(n!=0)
      {
	    digit=n%10;
	    n=n/10;
	    sum=sum+digit;
	    product=product*digit;
	    reverse=reverse*10+digit;
      }
    }
    printf("sum=%d\n",sum);
    printf("product=%d\n",product);
    printf("reverse=%d\n",reverse);
    return 0;
}
