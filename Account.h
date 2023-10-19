#include <iostream>
using namespace std;

class Account
{
      // this is only declaration
private:
      int actid;
      string name, city, email;
      double balance;

public:
      Account();
      Account(int actid, string name, string city, string email, double balance);
      void deposite(double amount);
      void withdraw(double amount);
      // destructor
      ~Account();
      void display();
      // can we pass UDT(class) as parameter to method:YES
      void moneyTransfer(double amount, Account &reciverAct);
};
