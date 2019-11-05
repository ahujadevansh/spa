#include<stdio.h>
void main()
{
    char c;
    printf("enter character: ");
    c=getchar();
    if(c>='A'&&c<='Z'||c>='a'&&c<='z')
        printf("entered character is alphabet");
    else
        if(c>='0'&&c<='9')
            printf("entered character is digit");
        else
            printf("entered character is other character");

}
