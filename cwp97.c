#include<stdio.h>
int main()
{
    void fun(int);
    fun(3);
    return 0;
}

void fun(int x)
{
    if(x>0)
    {
        printf("%d\n",x);
        fun(x-1);
    }
    printf("%d\n",x);
}
