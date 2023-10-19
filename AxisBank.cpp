#include<iostream>
#include"Account.h"
using namespace std;

void display(){
	cout<<"---display start---"<<endl;
	int a=10;
	Account act2;
	cout<<"---display end---"<<endl;
}

int main(){
	
	//display();
	//this is client code
	Account act1;//act will get stored on stack
	act1.deposite(79000);
	act1.display();
//	act.deposite(10000);
//	act.withdraw(2000);
	
	Account act2(202,"Sham","Nagar","s@gmail.com",50000);
//	act2.display();
//	act2.deposite(20000);
	
	//act1 want to send money to act2
	//can we pass UDT as parameter to method:YES
	//can we return UDT from function:Yes
	
	act1.moneyTransfer( 10000,act2);
	cout<<"\n\n";
	act1.display();
	act2.display();
	
	
	
	Account *ptr=new Account(505,"Seeta","pune","a",30000);
	ptr->display();
	cout<<"address of ptr="<<ptr<<endl;
	delete ptr;
	
	
	int arr[5];
	arr[0]=20;
	cout<<"----------------"<<endl;
	Account bank[5];
	bank[0]=act1;
	bank[1]=act2;
	for(int i=0;i<2;i++){
		bank[i].display();
	}
	
	
}

