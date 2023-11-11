/*
    Project Title:
    Write a program to create a simple ATM machine
    
    Author: Joel Oliveira
*/

#include <iostream>
using namespace std;

int printMenu ()
{
  int ans;
  cout<<"\n--------------------------------------------";
  cout << "\nEnter any option to be served!\n";
  cout << "\n1. Balance Enquiry\n2. Cash Withdraw\n3. Deposit Cash\n4. Exit\nEnter Your Choice: ";
  cin >> ans;
  return ans;
}

int main ()
{
  float balance = 1000.1, amt;
  int t = 1, choice, inChoice, pin;
  
  cout<<"\nPlease enter your PIN number";
  cout<<"\nPIN: ";
  cin>>pin;
  
  if(pin == 1234){
      
      while (t)
    {
        choice=printMenu();
        
        switch (choice) {
        case 1:
            cout<<"\nYour bank balance is Rs. "<<balance;
            cout<<"\n--------------------------------------------";
            cout<<"\n\nDo you want to perform another transaction?";
            cout<<"\nPress 1 to proceed and 2 to exit";
            cout<<"\n\nEnter your choice: ";
            cin>>inChoice;
            if(inChoice == 2){
                choice=4;
                cout<<"\n\n-----------------------------------------------";
                cout<<"\nThank You for banking with us, have a nice day!";
                cout<<"\n-----------------------------------------------";
                t=0;
            }
            else if(inChoice == 1){
                t=1;
            }
            else{
                cout<<"\nInvalid Input!!\n";
            }
            break;

        case 2:
            cout<<"\nPlease enter amount to withdraw: ";
            cin>>amt;
            if(balance<amt){
                cout<<"\nInsufficient Balance!!";
                cout<<"\nYour current bank balance is Rs. "<<balance;
            }
            else{
                balance=balance-amt;
                cout<<"\nPlease collect your cash";
                cout<<"\nYour available balance is Rs. "<<balance;
            }
            cout<<"\n--------------------------------------------";
            cout<<"\n\nDo you want to perform another transaction?";
            cout<<"\nPress 1 to proceed and 2 to exit";
            cout<<"\n\nEnter your choice: ";
            cin>>inChoice;
            if(inChoice == 2){
                choice=4;
                cout<<"\n\n-----------------------------------------------";
                cout<<"\nThank You for banking with us, have a nice day!";
                cout<<"\n-----------------------------------------------";
                t=0;
            }
            else if(inChoice == 1){
                t=1;
            }
            else{
                cout<<"\nInvalid Input!!\n";
            }
            break;

        case 3:
            cout<<"\nPlease enter amount to deposit: ";
            cin>>amt;
            
            balance=balance+amt;
            cout<<"\nThank you for depositing, your new balance is Rs. "<<balance;
            
            cout<<"\n--------------------------------------------";
            cout<<"\n\nDo you want to perform another transaction?";
            cout<<"\nPress 1 to proceed and 2 to exit";
            cout<<"\n\nEnter your choice: ";
            cin>>inChoice;
            if(inChoice == 2){
                choice=4;
                cout<<"\n\n-----------------------------------------------";
                cout<<"\nThank You for banking with us, have a nice day!";
                cout<<"\n-----------------------------------------------";
                t=0;
            }
            else if(inChoice == 1){
                t=1;
            }
            else{
                cout<<"\nInvalid Input!!\n";
            }
            break;
            
        case 4:
            cout<<"\n\n-----------------------------------------------";
            cout<<"\nThank You for banking with us, have a nice day!";
            cout<<"\n-----------------------------------------------";
            t=0;
            break;

        default:
            cout << "\nInvalid choice\n";
    
        }
    }

      
  }
  else{
      cout<<"\n\nYou have entered wrong PIN number!!";
  }
  
  
  return 0;
}
