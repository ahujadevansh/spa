
#include<stdio.h>
#include<conio.h>

void main()
{
    void bubble_sort(int [],int);
    int a[100];
    //int n,i,j,temp;
    int n,i;

    printf("enter no of elements(not more than 100): ");
    scanf("%d",&n);

    printf("array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    /*for(i=0;i<n-1;i++)
    for(j=0;j<n-1-i;j++)
        if(a[j]<a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }*/

    bubble_sort(a,n);

    printf("\n array elements in decending order:\n");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);

    getch();

}

void bubble_sort(int a [],int n)
{
    int j,temp,i;

    if(n-1!=0)
    {
        for(j=0;j<n-1;j++)
        if(a[j]<a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        bubble_sort(a,n-1);
    }

}
