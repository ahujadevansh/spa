#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    char s[100];
    void count(char []);

    printf("enter the string:\n");
    gets(s);

    count(s);
    getch();

}


void count(char s[])
{
    int n,i,vc=0,dc=0,cc=0,oc=0;
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                vc++;
            else
                cc++;
        }
        else

            if(s[i]>='0'&&s[i]<='9')
                dc++;
            else
            oc++;
    }

    printf("number of vowels present=%d\n",vc);
    printf("number consonantsof present=%d\n",cc);
    printf("number digits of present=%d\n",dc);
    printf("number other characters of present=%d\n",oc);


}
