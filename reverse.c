#include<stdio.h>
#include<conio.h>
#include<stdio.h>

void main()

{
    int n=0,x=0,temp,digit,count=0,c0=0,rev,j=0,k;
    char s[100];

    printf("enter n: ");
    gets(s);
    //scanf("%d",&n);

    for(j=0;s[j]=='0';j++);


    for(k=0;k<strlen(s);k++)
        n=n*10+s[k]-48;
     //printf("%d\n%d\n",j,n);


     temp=n;

     while(n!=0)
     {
         count++;
         n=n/10;
     }

    n=temp;


    while(n!=0)
        {
            digit=n%10;
            n=n/10;
            x=x*10+digit;
        }

    rev=x;

    while(x!=0)
     {
         x=x/10;
         c0++;
     }

     c0=count-c0;

     for(k=1;k<=j;k++)
        rev=rev*10;

    printf("reverse of number is:");
    for(k=1;k<=c0;k++)
        printf("0");

    printf("%d\n",rev);

    getch();
}

