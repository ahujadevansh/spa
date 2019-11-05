#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    char s[100];
    int ans;
    int words(char []);

    printf("enter the string:\n");
    gets(s);

    ans=words(s);

    printf("no. of words is:%d",ans);

    getch();

}

int words(char s[])
{
    int i,n,count=0;
    n=strlen(s);
       for(i=1;i<n;i++)
        if((s[i]==' '||s[i]=='\t')&&(s[i-1]!=' '&&s[i-1]!='\t'))
            count++;
        if(s[n-1]!=' '&&s[n-1]!='\t'&&n!=0)
            count++;
    return count;

}


/*int words(char s[])
{
    int i,n,count=0;
    n=strlen(s);
       for(i=1;i<n;i++)
        if(s[i]==' '&&s[i-1]!=' ')
            count++;
        if(s[n-1]!=' '&&n!=0)
            count++;
    return count;

}*/
