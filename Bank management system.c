#include<stdio.h>
#include<conio.h>
int main()
{
  clrscr();
  float draw,dep,transfer;
  char name[30];
  float balance=5000;
  int account,account1,account2;
  int type;
  int transaction=1;

  printf("\n\t\t\tWELCOME TO CAPTAIN BANK LIMITED\n\n\n");
  printf("Enter you name: ");
  scanf("%s",&name);
  printf("\nplease enter your account no.: ");
  scanf("%d",&type);
  while(transaction == 1)
  {
    int option;
    printf("\nchoose what you want to do\n");
    printf("1 - Balance Enquiry\n");
    printf("2 - Deposit\n");
    printf("3 - Withdraw\n");
    printf("4 - transfer\n");
    scanf("%d",&option);
    
  switch(option)
  {
  case 1:
    printf("\t\t\t---BALANCE ENQUIRY---\n\n");
    printf("your current balance is: $%.2f\n",balance);
    break;
  case 2:
    printf("\n\t\t\t---DEPOSIT AMMOUNT---\n\n");
    printf("how much money do you want to deposit:");
    scanf("%f",&dep);
  if(dep > 0 && dep<=20000)
  {
    printf("\nyour $%.2f deposited in your account.\n\n",dep);
    balance+=dep;
  }
  else if(dep>20000)
  {
    printf("\nyou can't deposit that much ammount in one time.\n\n");
    }
  else
  {
    printf("\ninvalid deposit amount\n");
  }
    break;
  case 3:
    printf("\n\t\t---WITHDRAW AMMOUNT---\n\n");
    printf("how much money do you want to withdraw:");
    scanf("%f",&draw);
  if(draw<=balance && draw<=20000)
  {
    printf("\nyou just withdraw $%.2f\n\n",draw);
    balance-=draw;
  }
  else if(draw>20000)
  {
    printf("\nyou can't withdraw that much amount in one time.\n\n");
  }
  else
  {
    printf("\nyou don't have enough money\n\n");
  }
  break;
  case 4:
    printf("\t\t\t---TRANSFER AMMOUNT---\n\n");
    printf("\n\t\tAccount You Want To Transfer: ");
    scanf("%d",&account2);
    printf("\nhow much ammount?: ");
    scanf("%f",&transfer);
  if(balance>=transfer)
  {
    printf("\nyour $%.2f successfully transfered\n\n",transfer);
    balance-=transfer;
  }
  else
  {
    printf("\nyou do not have sufficient balance\n\n");}
    break;
    default:
    printf("invalid transaction\n");
}
    transaction=0;
    while(transaction!=1 && transaction!=2)
    {
      printf("do you want to do another transaction?\n");
      printf("1. yes 2. no\n");
      scanf("%d",&transaction);
    if(transaction!=1 && transaction!=2)
    {
      printf("invalid no.\nchoose between 1 and 2 only\n");
    }
  }
}
clrscr();
  printf("\n\t\t\t\t\t\t--------------------");
  printf("\n\t\t\t\t\t\tCAPTAIN BANK LIMITED\n");
  printf("\t\t\t\t\t\t--------------------\n\n");
  printf("\t\t\tDate:3/5/16\t   Time:10:20 Am\n");
  printf("\n\t\t\t\t Your name: %s\n\n",name);
  printf("\t\t\t\t Your account no: %d\n\n",type);
  if(dep >= 0 && dep < 20000)
  {
    printf("\t\t\t\t You've deposited $%.2f\n",dep);
  }
  else
  {
    printf("\t\t\t\t You've deposited $0\n");
  }
  if(draw>0 && draw<=20000 && draw<=balance)
  {
    printf("\t\t\t\t You've withdraw $%.2f\n",draw);
  }
  else
  {
    printf("\t\t\t\t You've withdraw $0\n");
  }
  if(transfer>0 && transfer<=20000 && transfer<=balance)
  {
    printf("\t\t\t\t You've Transfered $%.2f\n",transfer);
   }
  else
  {
    printf("\t\t\t\t You've Transfered $0\n");
  }
  printf("\n\t\t\t\t Thank you! \n");
  printf("\t\t\t\t CAPTAIN BANK LIMITED\n");
  printf("\t\t\t\t www.captainbank.com\n");
getch();
return(0);
}