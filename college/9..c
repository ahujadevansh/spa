    #include<stdio.h>
void main()
{
    int option,a,b,c,d,sum=0;

    do
    {
        printf("1.cold drinks\n2.snacks\n3.main coarse\n4.deserts\n5.bill\n");
        scanf("%d",&option);

        if(option>=1&&option<=5)
        {

            switch(option)
            {
                case 1: {
                            printf("1.coca cola \tRs15\n2.miranda \tRs15\n3.sprite \tRs15\n4.mazza \tRs15\n5.chai \tRs15\nenter option: ");
                            scanf("%d",&a);
                            sum=sum+15;

                        }break;

                case 2:{
                            printf("1.dosa \tRs40\n2.pav bhaji \tRs45\n3.sandwich \tRs35\nenter option: ");
                            scanf("%d",&b);
                            switch(b)
                            {
                                case 1:sum=sum+40;break;
                                case 2:sum=sum+45;break;
                                case 3:sum=sum+35;break;
                            }

                        }break;

                case 3:{
                            printf("1.paneer masala with nan \tRs100\n2.dal rice \tRs85\n3.veg kolhapuri with chapati \tRs115\nenter option: ");
                            scanf("%d",&b);
                            switch(b)
                            {
                                case 1:sum=sum+100;break;
                                case 2:sum=sum+85;break;
                                case 3:sum=sum+115;break;
                            }

                        }break;

                case 4:{
                            printf("1.ice cream \tRs50\n2.shake \tRs40\n3.cake \tRs60\nenter option: ");
                            scanf("%d",&b);
                            switch(b)
                            {
                                case 1:sum=sum+50;break;
                                case 2:sum=sum+40;break;
                                case 3:sum=sum+60;break;
                            }

                        }break;

                case 5:break;
            }
        }
        else
            printf("invalid option");
    }
    while(option!=5);

    printf("bill is %d",sum);
}
