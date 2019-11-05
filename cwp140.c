#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char s1[100],s2[100];
    void string_cat(char [],char[]);

    printf("enter the first string:\n");
    gets(s1);
    printf("enter the second string:\n");
    gets(s2);


    string_cat(s2,s1);

    printf("concatenated string is:%s",s2);
    getch();

}

void string_cat(char s2[],char s1[])
{
    int i,n1,n2;
    n1=strlen(s1);
    n2=strlen(s2);
    for(i=0;i<=n1;i++)
    {
        s2[n2+i]=s1[i];
    }
}


