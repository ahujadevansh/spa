#include<stdio.h>
void main()
{
    int option,sum=0;
    printf("1. COLD DRINKS \t rs.20\n 2. MINERAL WATER \t rs.30\n 3.MEDU WADA \t rs.40 \n 4.IDLI SAMBAR \t rs.40 \n 5. TOTAL BILL \n  SELECT ITEMS :");
    while(option!=5)
    {


    scanf("%d",&option);
    switch(option)
        {

            case 1:{
                    //printf("COLD DRINK \t\t rs 20");
                    sum=sum+20;
                    printf("BILL : \t %d\n",sum);
                    }break;
            case 2:{
                    //printf("MINERAL WATER \t\t rs 20");
                    sum=sum+30;
                    printf("BILL : \t %d\n",sum);
                    }break ;
             case 3:{
                    //printf("MINERAL WATER \t\t rs 20");
                    sum=sum+40;
                    printf("BILL : \t %d\n",sum);
                    }break ;
             case 4:{
                    //printf("MINERAL WATER \t\t rs 20");
                    sum=sum+40;
                    printf("BILL : \t %d\n",sum);
                    }break ;
            case 5: break ;

            default: printf("invalid selection \n");
            break;


        }
    }
    printf("TOTAL BILL : \t %d\n\n\n\n\n\n\n\n#GST INCLUDED\n#MODI SARKAR\n#THANKYOU (PRACTICAL ME FULL DENA )",sum);
}
