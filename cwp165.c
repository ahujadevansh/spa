# include<stdio.h>
#include <ctype.h>
void main()
{
    FILE *fp;
    int i;
    char c,str[80];
    printf("enter file name: ");
    gets(str);

    fp=fopen(str,"w");

    printf("enter file data:\n");
    while((c=getchar())!='\n')
    {
        fputc(toupper(c),fp);
    }
    fclose(fp);
}
