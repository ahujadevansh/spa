#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char s[100],c[100];
    void reverse(char []);

    printf("enter the string:\n");
    gets(s);


    strcpy(c,s);

    reverse(s);

    printf("reverse of %s is %s",c,s);

    getch();


}


void reverse(char s[])
{
    int n,i;
    char temp;
    n=strlen(s);
    for(i=0;i<n/2;i++)
    {
        temp=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=temp;
    }
}
