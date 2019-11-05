#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char s1[100],s2[100];
    int ans;
    int string_compare(char [],char[]);

    printf("enter the first string:\n");
    gets(s1);
    printf("enter the second string:\n");
    gets(s2);


    ans=string_compare(s1,s2);

    if(ans>0)
        printf("first string %s is larger",s1);
    else
        if(ans<0)
        printf("second string %s is larger",s2);
        else
        printf("both strings are equal");
        getch();

}

int string_compare(char s1[],char s2[])
{
    int i,n1,n2,min,flag=1;
    n1=strlen(s1);
    n2=strlen(s2);
    min=(n1<n2)?n1:n2;
    for(i=0;i<=min;i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
        return s1[i]-s2[i];
    else return n1-n2;
}



