#include<stdio.h>
#include<conio.h>

struct book
{
    char name[40],title[40];
    int id;
    float cost;
};

void main()
{
    int n,i,c1=0,c2=0;
    struct book b[100];
    double s1=0,s2=0,a1,a2;

    printf("enter no of books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

        fflush(stdin);
        printf("enter book name");
        gets(b[i].name);

        fflush(stdin);
        printf("enter title of book");
        gets(b[i].title);

        printf("enter book id:");
        scanf("%d",&b[i].id);

        printf("enter book cost");
        scanf("%f",&b[i].cost);
    }

    for(i=0;i<n;i++)
        if(b[i].cost>=300)
        {
            c1++;
            s1=s1+b[i].cost;
        }
        else
            if(b[i].cost>=100&&b[i].cost<=200)
        {
            c2++;
            s2=s2+b[i].cost;
        }


    printf("sum of the cost of the all books whose cost is 300 or more:%.2f\n",s1);
    if(c1!=0)
     printf("average of the cost of the all books whose cost is 300 or more:%.2f\n",s1/c1);


    printf("sum of the cost of the all books whose cost is between 100 n 200:%.2f\n",s2);
    if(c2!=0)
     printf("average of the cost of the all books whose cost is between 100 n 200:%.2f\n",s2/c2);


    getch();
}
