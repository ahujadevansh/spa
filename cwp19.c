#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    //clrscr();
  ad:printf("enter a positive integer=");
    scanf("%d",&n);
    if(n<=0)
      {
      printf("invalid data\n");
      goto ad;
      }
    else
        if(n%10==7)
          printf("%d ends wwith 7\n",n);
        else
            printf("%d not ends with 7\n",n);
    getch();
    return 0;

}
