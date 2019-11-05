#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char str[100];
    int plaindrome(char []);
    int ans;

    printf("enter the string:\n");
    gets(str);

    ans=plaindrome(str);

    if(ans==0)
        printf("entered string %s is not a plaindrome",str);
    else
        printf("entered string %s is a plaindrome",str);

}


int plaindrome(char s[])
{
    int n,i,flag=1;
    n=strlen(s);
    for(i=0;i<n/2;i++)
    {
        if( tolower(s[i])!= tolower(s[n-1-i]))
        {
            flag=0;
            break;
        }
    }

    return flag;
}

