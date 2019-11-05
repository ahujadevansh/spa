#include<stdio.h>
#include<conio.h>
int main()
{
    float p=12.7156;
    float q=-12.7156;
    //clrscr();
    printf("%f\n",p);
    printf("%f\n",q);

    printf("%10f\n",p);
    printf("%10f\n",q);

    printf("%.2f\n",p);
    printf("%.2f\n",q);

    printf("%10.2f\n",p);
    printf("%10.2f\n",q);

    printf("%010.2f\n",p);
    printf("%010.2f\n",q);

    printf("%.3f\n",p);
    printf("%.3f\n",q);

    printf("%05.3f\n",p);
    printf("%05.3f\n",q);

    getch();
    return 0;
}
