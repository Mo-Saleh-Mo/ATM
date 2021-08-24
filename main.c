#include <stdio.h>

// functin menu 
void showMenu () {
  printf("\n ***** Menu ***** \n 1. Check balance \n 2. Deposit \n 3. Withdraw \n 4. Exit \n ***** **** ***** \n\n");
};

// function option
void siwt(int option) {
  double balance = 500;

  switch (option) {
  case 1:
    printf("Your Balance = %.2lf \n\n", balance);
    break;    
  case 2:
    printf("Please Enter you want push how mach Mony: ");
    double deposit;
    scanf("%lf", &deposit);
    balance += deposit;
    printf("Your Balance = %.2lf \n\n", balance);
    break;
  case 3:
    printf("Please Enter you want pull how mach Mony: ");
    double withdraw;
    scanf("%lf", &withdraw); 
    if(withdraw <= balance){
      balance -= withdraw;
      printf("Your Balance = %.2lf \n\n", balance);
    } else printf("Please Mony Not Enough !");
    break;
  case 4: break ;
  }
}

// functionb BDW
void BDW(void) {
  int option;
  do {
    // call function showMenu
    showMenu();
    printf("Please Enter A Number like in The Menu : ");
    scanf("%d", &option);
    system("cls");
    // call funtion option
    siwt(option);
  } while (option < 4);
};

// function main 
void main (void) {
  BDW();
};
