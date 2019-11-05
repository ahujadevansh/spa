#include<stdio.h>
#include<conio.h>
int main()
{
    int m;
    //clrscr();
    printf("enter marks=");
    scanf("%d",&m);
    if(m<0||m>100)
        printf("invalid marks");
    else
        if(m>=70)
          printf("the class is distinction");
        else
              if(m>=60)
                printf("the class is First class");
              else
                  if(m>=50)
                     printf("the class is Second class");
                  else
                      if(m>=40)
                        printf("the class is Pass class");
                      else
                          printf("the class is fail");
    getch();
    return 0;
}
