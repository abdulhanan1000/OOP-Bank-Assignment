#pragma once
#include<iostream>
using namespace std;
#include"bankaccount.h"

bankaccount::bankaccount() {
	balance = 0;
	deposits = 0;
	withdrawals = 0;
	annualinterestrate = 0;
	monthlyserviceCharges = 0;
	monthlyinterestrate = 0;
	status = 0;
}

void bankaccount::setbalance(double b)
{
	balance = b;
}
void bankaccount::setdeposits(int d) {
	deposits = d;
}
void bankaccount::setwithdrawals(int w) {
	withdrawals = w;
}
void bankaccount::set_annualinterestRate(double x)
{
	annualinterestrate = x;
}
void bankaccount::set_monthlyinterestrate(double i)
{
	monthlyinterestrate = i;
}
void bankaccount::set_monthlyserviceCharges(double y) {
	monthlyserviceCharges = y;
}





double bankaccount::getbalance() {
	return balance;
}
double bankaccount::get_annualinterestRate() {
	return annualinterestrate;
}
double bankaccount::get_monthlyinterestrate()
{
	return monthlyinterestrate;
}
int bankaccount::getdeposits() {
	return deposits;
}

int bankaccount::getwithdrwawals() {
	return withdrawals;
}

double bankaccount::get_monthlyserviceCharges() {
	return monthlyserviceCharges;
}
void bankaccount::deposit(double amount) {
	deposits = deposits + 1;
	balance = balance + amount;
	
}
void bankaccount::withdraw(double amount) {
	withdrawals = withdrawals + 1;
	balance = balance - amount;
	
}
void bankaccount::calcint() {
	monthlyinterestrate = (annualinterestrate / 12);
	monthlyinterestrate *= balance;
	balance = balance + monthlyinterestrate;
}

void bankaccount::monthlyproc() {
	balance =balance - monthlyserviceCharges;
	calcint();
}

void bankaccount::monthly_stats() {
	cout << "\n **********Monthly Stats*********";
	cout << "\n No Of Deposits : " << deposits;
	cout << "\n No Of Withdrawals : " << withdrawals;
	cout << "\n Service Charges : " << monthlyserviceCharges;
	cout << "\n Balance: " << balance;
	

}