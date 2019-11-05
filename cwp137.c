#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int ans;
    int string_length(char []);

    printf("enter the string:\n");
    gets(s);

    ans=string_length(s);

    printf("string length is:%d",ans);

}

int string_length(char s[])
{
    int i;

       i=0;
       while(s[i]!='\0')
            i++;
    return i;

}
