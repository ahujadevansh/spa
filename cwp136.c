#include<stdio.h>
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
    int n,i,j;
    char temp;
    n=strlen(s);

    for(i=0;i<n;i++)
        if(s[i]=='\t')
            s[i]=' ';


    for(i=0;i<n;i++)
    {
        if(s[i]==' '&&s[i+1]==' ')
        {
            for(j=i;j<=n;j++)
                s[j]=s[j+1];
            i--;

        }

    }

}

