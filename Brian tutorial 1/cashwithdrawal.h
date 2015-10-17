#ifndef CASHWITHDRAWAL_H
#define CASHWITHDRAWAL_H
#include<iostream>
#include "deposit.h"
using namespace std;
 

class withdrawal
{
	public:
	
	void setWithdrawal()
{
	
	cout<<"Please enter your withdrawal amount :";
	cin>>withdraw;

	
	if (withdraw<amount) 
{
	cout<<"an amount of "<<withdraw<<" has been withdrawn from your account"<<endl;
}
	else if (withdraw>amount)
{
	cout <<"you have insufficient funds in your account"<<endl;
 	 
}
		
}
	
	int getwithdrawal()
{
 	return withdraw;
}


	int getBalance(int withdraw)   //gets the balance.
{
	int amount=10000;
	balance=amount-withdraw;
	return balance;
	
}

	void displayBalance(int balance)
{
	cout<<"your balance after withdrawal is :"<<balance<<endl;
}

 protected:
	int cash;
	int amount;
	int withdraw;
	int balance;
};
#endif


