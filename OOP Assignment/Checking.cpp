#pragma once
#include<iostream>
using namespace std;
#include"Checking.h"
#include"saving.h"

void checking::withdraw(double amount) {
	saving::status();
	if (amount < 0) {
		cout << "\n Enter valid amount ";
	}
	else if (active == false) {
		cout << "\n Your account is inactive";
	}
	else if(bankaccount::balance-amount<0)
	{
		bankaccount::monthlyserviceCharges = bankaccount::monthlyserviceCharges + 15;
	}
	else
	{
		bankaccount::withdraw(amount);
	}
}

void checking::montly_proc() {
	bankaccount::monthlyserviceCharges += (5 + (bankaccount::withdrawals * 0.10));
	bankaccount::monthlyproc();

}