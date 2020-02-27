#pragma once
class bankaccount {

protected:
	double balance;
	int deposits;
	int withdrawals;
	double annualinterestrate;
	double monthlyserviceCharges;
	double monthlyinterestrate;
	bool status;

public:
	bankaccount();
	bankaccount(double balance,double annualinterestRate);
	double getbalance();
	int getdeposits();
	int getwithdrwawals();
	double get_annualinterestRate();
	double get_monthlyserviceCharges();
	double get_monthlyinterestrate();

	void setbalance(double b);
	void setdeposits(int d);
	void setwithdrawals(int w);
	void set_annualinterestRate(double x);
	void set_monthlyinterestrate(double i);
	void set_monthlyserviceCharges(double y);


	 void deposit(double);
	 void withdraw(double);
	 void calcint();
	 void monthlyproc();
	 void monthly_stats();

};