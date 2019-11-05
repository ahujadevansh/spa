# include<stdio.h>
#include <ctype.h>
void main()
{
    FILE *fp1,*fp2;
    int i;
    char c,str1[80],str2[80];
    printf("enter sourse file name: ");
    gets(str1);

    printf("enter sourse file name: ");
    gets(str2);

    fp1=fopen(str1,"r");
    fp2=fopen(str2,"w");

    while((c=fgetc(fp1))!=EOF)
    {
        fputc(c,fp2);
    }


    fclose(fp1);
    fclose(fp2);
}

