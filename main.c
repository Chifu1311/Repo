#include <stdio.h>
#include <stdlib.h>
#define moneyBalance 10000



void buyAirtime();
void buyBundle();
void sendMoney();
void checkBalance();

int main()
{


    int choice,option;



   do{
    printf("\t\tWelcome\n");
    printf("AIRTEL MONEY\n");
    printf("1 Buy Airtime\n");
    printf("2 Buy Bundle\n");
    printf("3 Send Money\n");
    printf("4 Check balance\n");
    scanf("%d",&option);

    switch(option)
    {
    case 1:
        buyAirtime();
        break;
    case 2:
        buyBundle();
        break;
    case 3:
        sendMoney();
        break;
    case 4:
        checkBalance();
        break;
    default:
        printf("Invalid option\n");
        break;
    }

   printf("\nselect 1 to continue\n");
   printf("Select 0 t quit\n");
   scanf("%d",&choice);
   }
   while(choice==1);


}
 void buyAirtime()
 {
   int airtime,phone,pin;
   int money;
   int option;
  printf("Select option\n");
  printf("1 My number\n");
  printf("2 Another Number\n");
  scanf("%d",&option);

    switch(option)
    {
    case 1:
        printf("Enter AIRTYIME amount\n");
        scanf("%d",&airtime);
        printf("Enter pin to confirm buying K%d Airtime",airtime);
        scanf("%d",&pin);
        if(airtime<=moneyBalance){
         printf("You have purchased airtime of %d",airtime);
        }
        else
        {
             printf("Transaction failed");
        }
        break;

    case 2:
        printf("Enter phone number\n");
        scanf("%d",&phone);
        printf("Enter the AIRTIME Amount\n");
        scanf("%d",&airtime);
        printf("Enter pin to confirm buying K%d",airtime);
        scanf("%d",&pin);
        if(airtime<=moneyBalance){
        printf("You have purchased airtime %d for %d",airtime,phone);
        }else
        {
            printf("Transaction failed\n");
        }
        break;
        }
 }
    void buyBundle()
    {
        int option;

       printf("select option\n");
       printf("1 My number\n");
       printf("2 Another Number\n");
       scanf("%d",&option);

       if(option==1)
        {
        printf(" Buy Bundle\n");
        printf("1 Internet Bundles\n");
        printf("2 Voice bundle\n");
        scanf("%d",&option);
        switch(option)
        {
      case 1:
        printf("PaNet Mofaya \n");
        printf("1 2GB,24Hrs K1000\n");
        printf("2 8Gb,7days K4000\n");
        scanf("%d",&option);
        {
            if(option==1)
                {
                if(moneyBalance>=1000)
                {
                printf("You have successfully purchased 2GB PaNet Mofaya Daily\n");
                }
                else
                {
                printf("You have insufficient funds\n");
                }
                }
            else
                {
                if(moneyBalance>4000)
                {
                printf("You have successfully purchased 8MB paNet weekly\n");
                }
                else
                {
                printf("you have insufficient funds\n");

                }
                }

        case 2:

        printf("PaNet Voice bundle\n");
        printf("1 3 minutes,24hrs K100\n ");
        printf("2 20 minutes,7days K300\n");

        scanf("%d",&option);
        if(option==1)
        {
            if(moneyBalance>=100)
            {
                printf("You have successfully purchased 3 minutes 24Hours\n");
            }
            else
            {
                printf("insufficient funds\n");
            }
           }
        else
            {
            if(moneyBalance>=300)
            {
            printf("You have successfully purchased 20 minutes Weekly\n");
            }
            else
            {
                printf("Insufficient funds");
            }
        }


        }
        }
        }
    }


    void sendMoney()
    {
      int phone;
      int amount;
      int code,option;
        printf("Select option:\n");
        printf("1 Airtel Number\n");
        printf("2 Agent Code\n");
        scanf("%d",&option);
        if(option==1)
        {
            printf("Enter phone number\n");
            scanf("%d",&phone);
            printf("Enter the amount\n");
            scanf("%d",&amount);
            if(amount<=moneyBalance)
            {
                printf("\nYour transaction was successful\n");
            }
            else
            {
                printf("\nInsufficient funds\n");
            }
        }
        else{
            printf("Enter AGENT CODE\n");
            scanf("%d",&code);
            printf("Enter the amount\n");
            scanf("%d",&amount);
            if(amount<=moneyBalance)
            {
                printf("Your transaction was successful\n");
            }
            else
            {
                printf("Transaction failed\n");
            }
        }


    }
    void checkBalance()
    {
        int pin;
        printf("Enter pin to check balance\n");
        scanf("%d",&pin);
        printf("Your Account Balance is K%d",moneyBalance);

    }









