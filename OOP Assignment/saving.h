#pragma once
#include"bankaccount.h"
class saving : public bankaccount {
protected:
	bool active;
public:
	void status();
	void deposit(double);
	void withdraw(double);
	void montlyProc();
	saving();
};