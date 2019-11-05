#include<stdio.h>
#include<conio.h>
int main()
{
    float p=12.7156;
    float q=-12.7156;
    //clrscr();
    printf("%e\n",p);
    printf("%e\n",q);

    printf("%.2e\n",p);
    printf("%.2e\n",q);

    printf("%15e\n",p);
    printf("%15e\n",q);

    printf("%15.2e\n",p);
    printf("%15.2e\n",q);

    printf("%015.2e\n",p);
    printf("%015.2e\n",q);

    getch();
    return 0;
}
