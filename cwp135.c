#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>

void main()
{
    char s[100];
    void cap(char []);

    printf("enter the string:\n");
    gets(s);

    cap(s);

    printf("modified string is:\n%s",s);

    getch();

}



void cap(char s[])
{
    int n,i;
    n=strlen(s);
    s[0]= toupper(s[0]);
    for(i=0;i<n;i++)
    {
        if((s[i]==' '&&s[i+1]!=' '))
            s[i+1]=toupper(s[i+1]);
    }

}
















/*void cap(char s[])
{
    int n,i;
    n=strlen(s);
    s[0]= toupper(s[0]);
    for(i=0;i<n;i++)
    {
        if((s[i]==' '||s[i]=='\t')&&s[i+1]!= ' '&&s[i+1]!='\t')
            s[i+1]=toupper(s[i+1]);
    }

}*/

