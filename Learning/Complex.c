#include<stdio.h>
#include <stdlib.h>
void initialMessage()
{
    printf("Welcome to the system");
}

void service()
{
    printf("\nPlease select an option");
    printf("\n-----------------------");
    printf("\n1.Account Balance Check");
    printf("\n2.Account Balance Add");
    printf("\n3.Account Balance Withdraw");
    printf("\n4.Exit From System\n");
}

int main()
{
    //variable
    int option,cont;
    int balance=500,addAmount,withdrawAmount;

    //Functions
    initialMessage();


    do
    {
        service();
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            printf("Your current balance is : %dTk",balance);
            printf("\n============================");
            break;
        case 2:
            printf("Please enter your amount");
            scanf("%d",&addAmount);
            balance+=addAmount;
            printf("You have added %dTk and your new balance is %dTk",addAmount,balance);
            break;
        case 3:
            printf("Please enter your amount");
            scanf("%d",&withdrawAmount);
            balance-=withdrawAmount;
            printf("You have withdraw %dTk and your new balance is %dTk",withdrawAmount,balance);
            break;
        case 4:
            break;
        }

        if(option==4){
            break;
        }

        printf("\nDo you want to continue ?");
        printf("\n1.Yes");
        printf("\n2.No\n");
        scanf("%d",&cont);
        if(cont==1){

        }else{
            break;
        }
    }
    while(option !=4);

    printf("\nThanks for stay with us.");
    printf("\n========================");

}
