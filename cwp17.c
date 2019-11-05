#include <stdio.h>
#include<conio.h>
int main()
{   int n;
    //clrscr();
    printf("enter a positive integer=\n");
    scanf("%d",&n);
    if (n<=0)
        printf("invalid data");
    else
        if(n%2==0)
          printf("%d is even\n",n);
        else
            printf("%d is odd\n",n);
    getch();
    return 0;
}


