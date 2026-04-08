#include<stdio.h>
 /*💡 What it will do
Phase 1 (START HERE)
User has a fixed balance (like ₹1000)
Show menu:
Check balance
Deposit money
Withdraw money
Exit*/


/* 

 This is the only part i used ai for i fiured the workings of loops and if else in loop how to make it an infinite myself 


loop forever
    show menu
    take input

    if 1 → show balance
    if 2 → take deposit → add to balance
    if 3 → take withdraw → check → subtract
    if 4 → exit loop
    */
int main(){
    int balance = 1000;
   //  int deposit = 150; for checking if it worksor not 
    int menu , deposit ,  withdraw ;
    int lp =0; // fixed for loop 
    printf("===== WELCOME TO ATM SYSTEM =====\n"); 
    while (lp<3) // statement true so loop begins 
    {
       printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");  
       printf("Enter your choice : ");
     scanf("%d",&menu);   
   
      if (menu==1)
      {
         printf("Total Balance : %d\n",balance);
      }
      else if (menu==2)
      {
        printf("Enter Deposit amount : ");
        scanf("%d",&deposit);  
        balance = balance  + deposit;
       
     //   int total = balance+deposit; // Int total is to assign balance + deposit in total so later we will update the total balance from balance to total less seeeee
      //    Lets suppose if user first check balance and then goes back and deposits the money so we should updatate that as well so lets make it happen ,,,  

       
      }   

        else if (menu==3)
      {
              printf("Enter Withdraw amount ");
               scanf("%d",&withdraw); 
               balance = balance - withdraw ; 
             
      }


       else if (menu==4)
      {
        break;
      }

      else{
         printf("Error enter a valid input !!!!!\n");
      }
      


      //  ++dmy;
      
    }
    



  //  printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");  
  //  printf("Enter your choice : ");
  //  scanf("%d",&menu);    

       //  lets try again and try 

//   while (menu<3)  // is menu  not grater then 98 ? (yes loops start no it dosent), menu initial value is 0 until user input 
//   {
//    printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");  
//    printf("Enter your choice : ");
//    scanf("%d",&menu);    
//   }
//                         // Lets try to build menu inside loop not loop inside menu 

//        // for (menu<3;menu++;)
//           // {     
              
              
//           //   printf("Total Balance : %d",balance);
//           //   menu--;   

//           //   if (menu==2)
//           //     {
//           //       return menu;
//           //     }
            

//           // }        

// //    while (menu<2 ,++menu)
// //     {
//       if (menu==1)
//    {  

//      while (menu>0)
//      {
//         printf("Current Balance : %d\n",balance);
//         --menu;
//    } 
//      }
     
// //    printf("Current Balance : %d",balance);
// //    } 
// //     // }
    

//    if (menu==9)
//    {
//    printf("Current Balance : %d",balance);
//    } 
//    else if (menu==2)
//    {
//    }
//     /* code 
//    }
//    else if (menu==3)
//    {
//     /* code 
//    } 
//    else if (menu==4)
//    {
//     return 0;
//    }
    
//    else {
//     printf("Enter a valid choice !!!!!!");
//    }
   
//    */
   

   

    return 0;
}
