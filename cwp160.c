#include<stdio.h>
#include<conio.h>
#include<string.h>


struct date
{
    int dd,mm,yy;
};

struct student
{
    int roll_no,total;
    char name[40];
    struct date dob;
};

void sort1 (struct student[],int);
void sort2 (struct student[],int);
void sort3 (struct student[],int);
void sort4 (struct student[],int);

struct student temp;

void main()
{
    int n,i,j,option;
    struct student s[100];



    printf("enter no of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("enter student %d name:",i+1);
        gets(s[i].name);

        printf("enter student %d roll no:",i+1);
        scanf("%d",&s[i].roll_no);

        printf("enter student %d total marks: ",i+1);
        scanf("%d",&s[i].total);

        printf("enter student %d date of birth(dd/mm/yyyy): ",i+1);
        scanf("%d %d %d",&s[i].dob.dd,&s[i].dob.mm,&s[i].dob.yy);
    }

        printf("sort according to");
        printf("1.name\n2.roll_no\n3.marks\n4.DOB\n");
        printf("enter option:");
        scanf("%d",&option);

        switch(option)
        {
            case 1:sort1(s,n);break;
            case 2:sort2(s,n);break;
            case 3:sort3(s,n);break;
            case 4:sort4(s,n);break;
        }



    printf("Roll no name\t\t\t\t\t total D.O.B\n");

    for(i=0;i<n;i++)
    {
        printf("%7d %-40s%5d %02d/%02d/%d\n",s[i].roll_no,s[i].name,s[i].total,s[i].dob.dd,s[i].dob.mm,s[i].dob.yy);
    }
    getch();
}

void sort1 (struct student s[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    for(j=0;j<n-1-i;j++)
        if(strcmpi(s[j].name,s[j+1].name)>0)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
}

void sort2 (struct student s[],int n)
{
    int i,j;

    for(i=0;i<n-1;i++)
    for(j=0;j<n-1-i;j++)
        if(s[j].roll_no>s[j+1].roll_no)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[i+1]=temp;
            }
}



void sort3 (struct student s[],int n)
{
    int i,j;

    for(i=0;i<n-1;i++)
    for(j=0;j<n-1-i;j++)
        if(s[j].total<s[j+1].total)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[i+1]=temp;
            }

}


void sort4 (struct student s[],int n)
{
    int i,j;

     for(i=0;i<n-1;i++)
    for(j=0;j<n-1-i;j++)
        if((s[j].dob.yy>s[j+1].dob.yy)||(s[j].dob.yy==s[j+1].dob.yy&&s[j].dob.mm>s[j+1].dob.mm)||(s[j].dob.yy==s[j+1].dob.yy&&s[j].dob.mm==s[j+1].dob.mm&&s[j].dob.dd>s[j+1].dob.dd))
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
}


