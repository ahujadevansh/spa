#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char s[100];
    char x;
    int search(char [],char);
    int ans;

    printf("enter the string:\n");
    gets(s);

    printf("enter character to be searched=");
    scanf("%c",&x);

    ans=search(s,x);

    if(ans==0)
        printf("%c is not present in %s",x,s);
    else
        printf("%c is present in %s %d times",x,s,ans);

    getch();

}


int search(char s[],char x)
{
    int n,i,count=0;
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]==x)
        {
            count++;
        }
    }

    return count;
}
