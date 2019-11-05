#include<stdio.h>
#include<ctype.h>
void main()
{
    char c;
    printf("enter character: ");
    c=getchar();
    if(c>='A'&&c<='Z')
            printf("\n%c",tolower(c));

    else
        if(c>='a'&&c<='z')
            printf("\n%c",toupper(c));
        else
            printf("\n%c",c);

}

