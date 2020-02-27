#pragma once
#include<iostream>
using namespace std;
#include"saving.h"

saving::saving() {
	active = 0;
}
void saving::status() {
	if (balance < 25) {
		active = false;
	}
	else
	{
		active = true;
	}
}

void saving::withdraw(double amount) {
	if (active==true)
	{
		bankaccount::withdraw(amount);
	}
	status();
}

void saving::deposit(double amount) {
	status();
	bankaccount::deposit(amount);
}

void saving::montlyProc() {
	if (withdrawals > 4) {
		monthlyserviceCharges = monthlyserviceCharges+ ((double)withdrawals - 4);
	}
	bankaccount::monthlyproc();
	status();
}

