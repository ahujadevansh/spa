#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    //clrscr();
    printf("enter alphabet(R/r,G/g,Y/y,B/b)\n");
    scanf("%c",&c);
    switch(c)
   {
    case'R':
    case'r':printf("red");break;
    case'G':
    case'g':printf("green");break;
    case'Y':
    case'y':printf("yellow");break;
    case'B':
    case'b':printf("blue");break;
    default:printf("invalid data");
   }
   getch();
   return 0;
}
