#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char s1[100],s2[100];
    void string_copy(char [],char[]);

    printf("enter the string:\n");
    gets(s2);

    string_copy(s1,s2);

    printf("copied string is:%s\n",s1);

    getch();

}

void string_copy(char s1[],char s2[])
{
    int i,n;
    n=strlen(s2);
    for(i=0;i<=n;i++)
    {
        s1[i]=s2[i];
    }
}

