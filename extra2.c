# include<stdio.h>
#include<stdio.h>
#include<string.h>
struct student
{
    char name[40];
    int roll_no;
};
void main()
{
    FILE *fp,*fp1;
    char c,str[80];
    struct student s,r;
    int n;
    printf("enter file name: ");
    gets(str);

    fp=fopen(str,"w");

    printf("enter name of student: ");
    gets(s.name);
    //scanf("%s",s.name);   only take one word of name
    n=strlen(s.name)+1;
    fflush(stdin);
    printf("enter roll no: ");
    scanf("%d",&s.roll_no);


    fprintf(fp,"%s",s.name);
    //fputs(s.name,fp);
    fprintf(fp,"%d",s.roll_no);

    fclose(fp);

    fp1=fopen(str,"r");
    while(!feof(fp1))
    {

        //fscanf(fp1,"%s",r.name);
        fgets(r.name,n,fp1);
        fscanf(fp1,"%d",&r.roll_no);

        printf("%s\n",r.name);
        printf("%d\n",r.roll_no);
    }
    fclose(fp);
}

