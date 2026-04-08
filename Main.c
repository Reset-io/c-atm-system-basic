#include<stdio.h>

int main(){ 
        //   All intigers 
    int balance = 1000; // Fixed balance;
    int menu, deposit, withdraw;
  //  int lp = 0;  //Manual infinite loop;   if you want to use manual loop use this condition : while (lp<3) or 2 , 1 etc

    while (1) //Better and efficent way to use loop infinitely and  1 = true and if condition is true loop works else it dosent 
    {                    
                // Atm header
        printf("===== WELCOME TO ATM SYSTEM =====\n");
        printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter your choice : "); // User choice input 
        scanf("%d", &menu);  // Capture choice


        //    if else condition and logic 
        if (menu == 1)
        {
            printf("Total Balance : %d\n", balance);
        }
        else if (menu == 2)
        {
            printf("Enter Deposit amount : ");
            scanf("%d", &deposit);
            balance = balance + deposit;
        }
        else if (menu == 3)
        {
            printf("Enter Withdraw amount ");
            scanf("%d", &withdraw);
            balance = balance - withdraw;
        }
        else if (menu == 4)
        {
           break ;  // exit fun if user choosed 
        }
        else
        {
            printf("Error enter a valid input !!!!!\n"); // Valid input handler 
        }
    }

    return 0;
}