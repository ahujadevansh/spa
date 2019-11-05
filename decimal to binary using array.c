#include<stdio.h>
void main()
{
   int x=75,i=0,j,sum=0;
   int static a[80];
   while(x>0)
   {
       a[i]=x%2;
       x=x/2;
       i++;
   }

    for(j=i-1;j>=0;j--)
    sum=sum*10+a[j];

    printf("\n %d",sum);

}
/*
#include<stdio.h>
void main()
{
   int x=9,i=0,j;
   int static a[80];
   while(x>0)
   {
       a[i]=x%2;
       x=x/2;
       i++;
   }
    for(j=i-1;j>=0;j--)
    printf("%d",a[j]);

}

*/
