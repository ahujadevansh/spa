#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
    char s[100];
    char x;
    void search(char [],char);

    printf("enter the string:\n");
    gets(s);

    printf("enter character to be searched=");
    scanf("%c",&x);

    printf("following are the positions of %c:\n\n",x);

    search(s,x);

    getch();

}


void search(char s[],char x)
{
    int n,i,count=0;
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]==x)
        {
            count++;
            printf("%d\t",i);
        }
    }

    if(count==0)
        printf("%c is not present in %s",x,s);
}
