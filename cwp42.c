#include<stdio.h>
int main()
{
    int i,y;
    float x,ans=1;
    printf("enter x & y=");
    scanf("%f %d",&x,&y);
    if(x==0&&y==0)
        printf("NOT DEFINED");
    else if(x==0&&y<0)
        printf("infinity");
    else if(x!=0&&y<0)
        {
            for(i=1;i<=-y;i++)
                ans=ans/x;
            printf("answer =%f",ans);
        }
         else
            {
             for(i=1;i<=y;i++)
                 ans=ans*x;
             printf("answer =%f",ans);
            }
    return 0;

}
