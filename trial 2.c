#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    int n=100000,i,j,flag=1,count=0;
    //scanf("%d",&n);
    for(i=2;count<n;i++)
    {
        flag=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                flag=0;
        }
        if(flag==1)
            printf("%d ",i);
        count++;
    }
    return 0;
}
