#include <stdio.h>
#include <stdlib.h>

void initialMessage()
{
    printf("Welcome to the system\n\n");
}
void service()
{
    printf("Please select an option\n");
    printf("-----------------------\n\n");
    printf("1.Account Balance Check\n");
    printf("2.Account Balance Add\n");
    printf("3.Account Balance Withdraw\n");
    printf("4.Exit For System\n");
}


int main()
{
    //variable
    int option,cont;
    int balance=500,addAmmount,withdrawAmmount;
//function
    initialMessage();
    //service();

    do
    {
        service();
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            printf("Your current balance is: %dTk\n",balance);
            break;
        case 2:
            printf("Please Enter Your Amount");
            scanf("%d",&addAmmount);
            balance+=addAmmount;
            printf("You heve added %dTk and Your new balance is %dTk\n",addAmmount,balance);
            break;
        case 3:
            printf("Please Enter Your Amount");
            scanf("%d",&withdrawAmmount);
            balance-=withdrawAmmount;
            printf("You heve withdraw %dTk and Your new balance is %dTk\n",withdrawAmmount,balance);
            break;
        case 4:
            break;
        default:
            printf("Please enter the correct option");
            break;
        }
        if (option==4)
        {
            break;
        }


        printf("Do you want to continue\n");
        printf("1.Yes\n");
        printf("2.No\n");
        scanf("%d",&cont);


        while (cont !=1)
        {
            if(cont==2)
            {
                option=4;
                break;
            }
            printf("Please Enter The Correct Option\n");
            printf("Do you want to continue\n");
            printf("1.Yes\n");
            printf("2.No\n");
            scanf("%d",&cont);

        }
    }
    while (option!=4);




    printf("Thanks for stay with us.\n");
    printf("=========================");
}


