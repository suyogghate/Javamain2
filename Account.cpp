#include <iostream>
#include<string>
#include "Account.h"
using namespace std;

void Account::moneyTransfer(double amount, Account &reciverAct)
{
	// act1.moneyTransfer(double amount,act2);
	// sender:act1
	// reciver:act2
	// which obj responsible for invoking method:act1
	// this-> is holding ref of act1
	// change balanace of sender
	this->balance = this->balance - amount;
	// change balance of reciver
	reciverAct.balance = reciverAct.balance + amount;

	cout << "Money Transfer from " << this->name << "   to " << reciverAct.name;
}
void Account::display()
{
	cout << actid << "   " << name << "   " << city << "   " << email << "   " << balance << endl;
}

Account::~Account()
{
	cout << "destructor get called...." << endl;
}
Account::Account(int actid, string name, string city, string email, double balance)
{
	cout << "---parameter Account---" << endl;
	this->actid = actid;
	this->name = name;
	this->city = city;
	this->email = email;
	this->balance = balance;
}
Account::Account()
{
	cout << "---default Account---" << endl;
	this->actid = 101;
	this->name = "Ram";
	this->city = "Pune";
	this->email = "abc";
	this->balance = 1000;
}
void Account::withdraw(double amount)
{
	balance = balance - amount;
	cout << "After withdraw Balanace:" << balance << endl;
}

void Account::deposite(double amount)
{
	balance = balance + amount;
	cout << "After Deposite Balanace:" << balance << endl;
}

