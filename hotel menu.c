#include<stdio.h>
void main()
{
    int bill,option,quan,i;
    int static s[9];

    printf("1.chai\t\trs10\n2.coffee\trs12\n3.milkshakes\trs25\n4.sandwich\trs40\n5.dosa\t\trs50\n");
    printf("6.pav bhaji\trs60\n7.paneer n nan\trs120\n8.dal rice\trs110\n9.ice cream\trs55\n10.bill\n");
    do
    {
        printf("\n enter item code: ");
        scanf("%d",&option);
        if(option>=1&&option<=9)
        {
            printf("enter quantity: ");
            scanf("%d",&quan);
        }

        switch (option)
        {
            case 1:s[option]=s[option]+10*quan;break;
            case 2:s[option]=s[option]+12*quan;break;
            case 3:s[option]=s[option]+35*quan;break;
            case 4:s[option]=s[option]+40*quan;break;
            case 5:s[option]=s[option]+50*quan;break;
            case 6:s[option]=s[option]+60*quan;break;
            case 7:s[option]=s[option]+120*quan;break;
            case 8:s[option]=s[option]+110*quan;break;
            case 9:s[option]=s[option]+55*quan;break;
            case 10:break;

        }

    }
    while(option!=10);
    for(i=1;i<=9;i++)
        s[0]=s[0]+s[i];
    printf("\nitem\t\tamount\n");
    printf("1.chai\t\t%6d\n2.coffee\t%6d\n3.milkshakes\t%6d\n4.sandwich\t%6d\n5.dosa\t\t%6d\n",s[1],s[2],s[3],s[4],s[5]);
    printf("6.pav bhaji\t%6d\n7.paneer n nan\t%6d\n8.dal rice\t%6d\n9.ice cream\t%6d\n10.total bill\t%6d\n",s[6],s[7],s[8],s[9],s[0]);

}
