#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[100];
    int flag=1,i,n;


    printf("enter the string:\n");
    gets(s);
    n=strlen(s);
    for(i=0;i<n/2;i++)
    {
        if (tolower(s[i])!=tolower(s[n-1-i]))
        flag=0;
    }

    if(flag==1)
        printf("%s is plaindrome",s);


}


