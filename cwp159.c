#include<stdio.h>
#include<conio.h>

struct student
{
    int roll_no,total;
    char name[40];
};

void main()
{
    int n,i,j;
    struct student s[50],temp;

    printf("enter no of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("enter student %d name:"i+1);
        gets(s[i].name);

        printf("enter student %d roll no:",i+1);
        scanf("%d",&s[i].roll_no);

        printf("enter student %d total marks: ",i+1);
        scanf("%d",&s[i].total);
    }

    for(i=0;i<n-1;i++)
    for(j=1;j<n-1-i;j++)
        if(s[i].total<s[i+1].total)
            {
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }


    printf("Roll no name\t\t\t\t\ttotal\n");

    for(i=0;i<n;i++)
    {
        printf("%7d %-40s%5d\n",s[i].roll_no,s[i].name,s[i].total);
    }
    getch();
}


