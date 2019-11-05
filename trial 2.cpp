#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    void print_mat(char [][3]);

    int b[10]={0}; // to ensure a entry is not repeated twice
    char a[3][3]; // matrix to store input
    int i,j,n,flag=1,hchh=7;
    char k,x='X',o='O',xo;
    char name1[40]="computer",name2[40];
    do
    {
        printf("welcome to tic tac toe\n\n\n");
        printf("1.human vs computer\n\n2.human vs human\n\nENTER YOUR OPTION: ");
        scanf("%d",&hchh);

            if(hchh==1)
            {
                fflush(stdin);
                printf("Enter your name:");
                gets(name2);
            }
            else if (hchh==2)
                    {
                        fflush(stdin);
                        printf("Enter player1 name:");
                        gets(name1);
                        printf("  Enter player2 name:");
                        gets(name2);
                    }
                 else
                 {
                     printf("   invalid option\n");
                     printf("   enter any key to continue..");
                     getch();
                 }
        system("CLS");
    }while(hchh<1||hchh>2);

    do
    {
        // to display pattern with options:
        k='1';
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            a[i][j]=k;
            k++;
        }
        print_mat(a);
        if(hchh==1)
            printf("player %s enter X or O:",name2);
        if(hchh==2)
            printf("player %s enter X or O:",name1);
        scanf("%c",&xo);
        if(hchh==2)
        {
            o=xo;
            x=(xo=='x')?'o':'x';
        }
        if(hchh==1)
        {
            x=xo;
            o=(xo=='x')?'o':'x';
        }
        if(xo!='x'&&xo!='X'&&xo!='O'&&xo!='o')
        {
            printf("invalid option:");
        }
        //else break;
        system("CLS");
    }while(xo!='x'&&xo!='X'&&xo!='O'&&xo!='o');
    system("PAUSE");
// to display blank pattern
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        a[i][j]=' ';
    }
    print_mat(a);
// main code
    for(i=1;i<=9;i++)
    {

        flag=1;
        if(i%2==0)
            printf("\nplayer %s turn\n",name2);
        else
            printf("\nplayer %s turn\n",name1);


        fflush(stdin);
        ad:if(hchh==1&&(i%2==1))
            {
                srand(time(0));
                do
                {
                    n=rand()%10;
                }
                while(n==0);
            }
        else
        {
            printf("enter position:");
            fflush(stdin);
            scanf("%d",&n);
        }
        if(n<1||n>9)
        {
            printf("....invalid position");
            i--;
        }
        else
        {
            for(k=1;k<=9;k++)
            {
                if(n==b[k]&&hchh==1&&(i%2==1))
                    goto ad;
                 else if(n==b[k])
                    {
                        printf("\n\ninvalid position\n\n");
                        flag=0;  // so that it cannot enter in switch
                        i--;  // to run loop one more time since one entry is repeated twice
                    }
            }

            b[i]=n; // stores the entry which is filled

            if(flag==1)
            {
                switch(n)
                {
                    case 1:a[0][0]=(i%2==0)?x:o;break;
                    case 2:a[0][1]=(i%2==0)?x:o;break;
                    case 3:a[0][2]=(i%2==0)?x:o;break;
                    case 4:a[1][0]=(i%2==0)?x:o;break;
                    case 5:a[1][1]=(i%2==0)?x:o;break;
                    case 6:a[1][2]=(i%2==0)?x:o;break;
                    case 7:a[2][0]=(i%2==0)?x:o;break;
                    case 8:a[2][1]=(i%2==0)?x:o;break;
                    case 9:a[2][2]=(i%2==0)?x:o;break;


                }
                print_mat(a);
            }
        }
// wining condition
            if((a[0][0]==x&&a[0][1]==x&&a[0][2]==x)||(a[1][0]==x&&a[1][1]==x&&a[1][2]==x)||(a[2][0]==x&&a[2][1]==x&&a[2][2]==x)||(a[0][0]==x&&a[1][0]==x&&a[2][0]==x)||(a[0][1]==x&&a[1][1]==x&&a[2][1]==x)||(a[0][2]==x&&a[1][2]==x&&a[2][2]==x)||(a[0][2]==x&&a[1][1]==x&&a[2][0]==x)||(a[0][0]==x&&a[1][1]==x&&a[2][2]==x))
               {
                   printf("\n\n\t\t\t%s WINS\n\n",name2);
                   break;
               }

            else
                if((a[0][0]==o&&a[0][1]==o&&a[0][2]==o)||(a[1][0]==o&&a[1][1]==o&&a[1][2]==o)||(a[2][0]==o&&a[2][1]==o&&a[2][2]==o)||(a[0][0]==o&&a[1][0]==o&&a[2][0]==o)||(a[0][1]==o&&a[1][1]==o&&a[2][1]==o)||(a[0][2]==o&&a[1][2]==o&&a[2][2]==o)||(a[0][2]==o&&a[1][1]==o&&a[2][0]==o)||(a[0][0]==o&&a[1][1]==o&&a[2][2]==o))
                    {
                        printf("\n\n\t\t\t%s WINS\n\n",name1);
                        break;
                    }

                else
                    if(i==9)
                   {
                       printf("\n\n\t\t\tGAME DRAW\n\n");
                       break;
                   }
    }

    printf("enter any key to exit..");
    getch();
    return 0;
}

void print_mat(char a[][3])
{
    int i,j,k;
    system("CLS");
    printf("\n\n\n");
    for(i=0;i<3;i++)
    {
        if(i==0)
            printf("\t\t\t");
        else
            printf("\n\t\t\t___|____|___\n\t\t\t");

        for(j=0;j<3;j++)
            if(j!=2)
                printf(" %c | ",a[i][j]);
            else
                printf(" %c  ",a[i][j]);

    }
    printf("\n\t\t\t   |    |   \n\t\t\t");
    printf("\n\n\n");
}

int random(int x)
{
    int key;
    key=(x%1+x%8-x%3+x%6*x%9+(x*x*x%9))%10;
    while(key==0) // since there is no use of 0 index in pattern
    {
        x++;
        key=random(x);
    }

    if(key<0)
        key=(-1)*key;

    return key;

}

