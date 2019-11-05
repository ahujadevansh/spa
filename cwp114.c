#include<stdio.h>
int main()
{
    int a[100]={1,2,3,4,5};
    int i,n,x=0,temp,j=0,k;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter elements one by one:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(n==100)
        printf("array is already full");
    else
    {

    printf("enter the element to be inserted and its position:");
    scanf("%d %d",&x,&j);
    if(j<0||j>100)
        printf("invalid data");
    else
        {
            /*for(i=0;i<n;i++)
                if(i==j)
            {
                for(k=n;k>j-1;k--)
                {
                    a[k+1]=a[k];
                }
                a[j]=x;
                n++;
                break;
                printf("insertion done:)");
            }*/

            /*for(i=n-1;i>=j;i--)
                a[i+1]=a[i];
                a[j]=x;
                n++;
                printf("insertion done:)\n\n");*/

               for(i=n;i>=j;i--)
                a[i]=a[i-1];
                a[j]=x;
                n++;
                printf("insertion done:)\n\n");

        }
        printf("modified array:\n");
        for(i=0;i<n;i++)
            printf("%d  ",a[i]);
    }
    return 0;
}
