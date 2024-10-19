#include<stdio.h>

int main()
{
    int x,y;
    int ack ( int, int);
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("%d", ack(x,y));
}

int ack(int x, int y)
{
    if(x == 0) 
    {
        return y+1;
    }
    else if(y == 0 && x > 0) {
        return ack(x-1, y);
    }
    else {
        ack(x-1, ack(x, y-1));
    }
}