# include<stdio.h>
void main()
{
    FILE *fp;
    int vc=0,cc=0,dc=0,oc=0;
    char c,str[80];
    printf("enter file name: ");
    gets(str);

    fp=fopen(str,"r");
    if(fp==NULL) printf("file does not exists");
    else
    {

        while((c=fgetc(fp))!=EOF)
        {
            printf("%c",c);
            if(c>='A'&&c<='Z'||c>='a'&&c<='z')
            {
                if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='u'||c=='o'||c=='i'||c=='e'||c=='a')
                    vc++;
                else
                    cc++;

            }
            else
                if(c>='0'&&c<='9')
                    dc++;
                else
                    oc++;
        }
        printf("\nnumber of vowels=%d\n",vc);
        printf("\nnumber of consonants=%d\n",cc);
        printf("\nnumber of digits=%d\n",dc);
        printf("\nnumber of other character=%d\n",oc);


        fclose(fp);
    }
}

