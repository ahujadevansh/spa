#include<stdio.h>
void main()
{

    int x = 100, y, a=52, b,z;
    y = --x * --x && --x || x;
    printf("%d ", y);
    b = --a +!(x<=a) && (x || !y);
    printf("%d ", y);
    z = b-- + x++ - ++y +a;
    printf("%d ", z);
}

//# define s(a, b) a++ << b ^ c
/*
void main() {

    static int a = 2, b = 3, c = 4;
    printf("%d", s(a|b, b&a));
}*/
