#include<stdio.h>
int main()
{
    int y;
    float x;
    float power(float,int);
    printf("enter x and y=\n");
    scanf("%f %d",&x,&y);
    if(y<0)
        printf("invalid data");
    else
        if(y==0)
            if(x==0)
                printf("math error");
            else
                printf("answer=1");
        else
        {if(x<0)
            {
                printf("answer=%f",power(x,y));
            }
        /* else
         {
            printf("answer=%f",power(x,y));
         }

        */
        }

    return 0;
}
float power(float x,int y)
{
    if(y==0)
        return 1;
    else
        if(x>0)
        return x*power(x,y-1);
        //else
        //return(1/x)*power(x,y-1);

}



