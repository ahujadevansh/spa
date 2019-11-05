#include<stdio.h>
int main()
{
    int a[11]={0};
    int marks,i,j,n;;
    printf("enter number of students=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter marks of student%d:",i+1);
        scanf("%d",&marks);
        a[marks/10]++;
    }
    printf("GRADE\tNO.OF.STUDENTS\n");
    for(i=0;i<11;i++)
        printf("%3d\t%6d\n",i,a[i]);

    return 0;
}




/*#include<stdio.h>
int main()
{
    int g[11]={0};
    int m[100];
    int marks,i,n,x;
    printf("enter number of students=");
    scanf("%d",&n);
    printf("enter marks of students one by one:\n");
    for(i=0;i<n;i++)
        scanf("%d",&m[i]);
    for(i=0;i<n;i++)
    {
        x=m[i]/10;
        g[x]++;
    }
    for(i=0;i<11;i++)
        printf("number of students in  grade %d = %d\n",i,g[i]);

    return 0;
}*/
