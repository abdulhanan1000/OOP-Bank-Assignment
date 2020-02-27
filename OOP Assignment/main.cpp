#pragma once
#include<iostream>
using namespace std;
#include"bankaccount.h"
#include"saving.h"
#include"Checking.h"

void main() {

	
	saving customer1;


	customer1.setbalance(10000);
	customer1.setdeposits(1);
	customer1.withdraw(10000);
	customer1.set_monthlyinterestrate(1);
	customer1.set_annualinterestRate(2);
	customer1.set_monthlyserviceCharges(50);
	customer1.calcint();
	customer1.monthlyproc();
	customer1.monthly_stats();

	system("pause");


}