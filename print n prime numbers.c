#include<stdio.h>
void main()
{
   int n,i=0,flag,count=0;
   int prime(int);

   printf("enter n:  ");
   scanf("%d",&n);

   while(count!=n)
   {
       i++;
       flag=prime(i);
       if(flag==1)
       {
           printf("%d ",i);
           count++;
       }

   }
}

int prime( int n)
{
   int i,flag=1;
   if(n==1)
    flag=0;
   for(i=2;i<n;i++)
    if(n%i==0)
        flag=0;
   return flag;
}

