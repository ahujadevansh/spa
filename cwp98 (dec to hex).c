#include<stdio.h>
int main()
{
    int n;
    void dechex(int);
    printf("enter the positive integer=");
    scanf("%d",&n);
    if(n<0)
        printf("invalid data");
    else
        dechex(n);
    return 0;
}

/*void dechex(int x)
{
    if(x>0)
    {
        int a;
        dechex(x/16);
        a=x%16;
        if(a<=9)
            printf("%d",a);
        else
            switch(a)
        {
            case 10:printf("A");break;
            case 11:printf("B");break;
            case 12:printf("C");break;
            case 13:printf("D");break;
            case 14:printf("E");break;
            case 15:printf("F");break;

        }
    }
}*/


void dechex(int x)
{
    if(x>0)
    {
        int a;
        dechex(x/16);
        a=x%16;
        if(a<=9)
            printf("%d",a);
        else
        {
            a=a+55;
            printf("%c",(char)a);
        }
    }
}


