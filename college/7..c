#include<stdio.h>
void main()
{
    int n,i;

    printf("enter the number: ");
    scanf("%d",&n);

    if(n%4==0&&n%100!=0||n%400==0)
        printf("%d is leap year",n);
    else
    printf("%d is not leap year",n);
}
