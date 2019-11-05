#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

void main()
{
    char s1[80],s2[80];
    int n1,n2,j=0,i,flag=0,count=0;


    printf("enter the main string: ");
    gets(s1);
    n1=strlen(s1);

    printf("enter the sub string: ");
    gets(s2);
    n2=strlen(s2);

    for(i=0;i<n1;i++)
    {
        j=0;
        flag=0;
        if(s2[j]==s1[i])
        {
            flag=1;
            for(j=0;j<n2;j++)
                if(s1[i+j]!=s2[j])
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
        {
            printf("\nsubstring is present at position %d\n",i);
            count++;
            //break;
        }
    }

    if(count==0)
    {
        printf("substring is not present in main string");
    }

    getch();

}



