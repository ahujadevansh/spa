#include<stdio.h>
void main()
{
    char c;
    printf("enter character: ");
    c=getchar();
    if(c>='A'&&c<='Z'||c>='a'&&c<='z')
    {
        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            printf("entered character is vowel");
        else
            printf("entered character is consonant");
    }
    else
        if(c>='0'&&c<='9')
            printf("entered character is digit");
        else
            printf("entered character is other character");

}

