#include<stdio.h>
#include<conio.h>

struct student
{
    int roll_no,p,c,m;
    float avg;
};

void main()
{
    int n,i;
    struct student s[60];

    printf("enter no of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter student %d roll no:",i+1);
        scanf("%d",&s[i].roll_no);

        printf("enter student %d pcm marks one by one: ",i+1);
        scanf("%d %d %d",&s[i].p,&s[i].c,&s[i].m);

        s[i].avg=(s[i].p+s[i].c+s[i].m)/3.0;
    }

    printf("Roll no average\n");

    for(i=0;i<n;i++)
    {
        printf("%7d %7.2f\n",s[i].roll_no,s[i].avg);
    }
    getch();
}
